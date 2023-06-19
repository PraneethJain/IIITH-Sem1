#include <stdio.h>

int abs(int n)
{
    return n > 0 ? n : -n;
}

void solve(int n, int m, int r, int c)
{
    int num;
    int cur;
    int arr[2] = {0, 0};
    int min = 1001;
    for (int i = 1; i <= n; ++i)
    {
        for (int j = 1; j <= m; ++j)
        {
            scanf("%i", &num);
            if (num)
            {
                cur = abs(r - i) + abs(c - j);
                if (cur < min)
                {
                    min = cur;
                    arr[0] = i;
                    arr[1] = j;
                }
            }
        }
    }

    if (arr[0])
        printf("%i %i\n", arr[0], arr[1]);
    else
        printf("-1\n");
}

int main()
{
    int t, n, m, r, c;
    scanf("%i", &t);
    for (int l = 0; l < t; ++l)
    {
        scanf("%i %i %i %i", &n, &m, &r, &c);
        solve(n, m, r, c);
    }

    return 0;
}