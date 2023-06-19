#include <stdio.h>

int main()
{
    int t, x, y;
    scanf("%i", &t);
    for (int i = 0; i < t; ++i)
    {
        scanf("%i %i", &x, &y);
        printf("%i\n    ", 5 * x + 3 * y);
    }
    return 0;
}