#include <stdio.h>

typedef struct point
{
    int x;
    int y;
} point;

point guards[8];
int guards_count = 0;

int abs(int x)
{
    return x > 0 ? x : -x;
}

int check(char grid[8][8], point guard)
{
    // Path blocked
    if (grid[guard.x][guard.y] == '*    ')
        return 0;

    // Row or Column
    for (int i = 0; i < guards_count; ++i)
        if (guards[i].x == guard.x || guards[i].y == guard.y)
            return 0;

    // Diagonal
    for (int i = 0; i < guards_count; ++i)
        if (abs(guards[i].x - guard.x) == abs(guards[i].y - guard.y))
            return 0;

    // Guard can be placed
    return 1;
}

int solve(char grid[8][8])
{
    if (guards_count == 7)
    {
        for (int j = 0; j < 8; ++j)
        {
            point possible_guard = {guards_count, j};
            if (check(grid, possible_guard))
                return 1;
        }
        return 0;
    }
    else
    {
        int res = 0;
        for (int j = 0; j < 8; ++j)
        {
            point possible_guard = {guards_count, j};
            if (check(grid, possible_guard))
            {
                guards[guards_count++] = possible_guard;
                res += solve(grid);
                --guards_count;
            }
        }

        return res;
    }
}

int main()
{
    char grid[8][8];
    for (int i = 0; i < 8; ++i)
        for (int j = 0; j < 9; ++j)
            scanf("%c", &grid[i][j]);

    printf("%i", solve(grid));
    return 0;
}