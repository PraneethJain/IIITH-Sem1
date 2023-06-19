#include <stdio.h>

int main()
{
    int n;
    scanf("%i", &n);
    for (int i = 1; i <= n; ++i)
    {
        for (int j = 0; j < n - i; ++j)
        {
            printf(" ");
        }
        for (int k = i * (i - 1) / 2 + 1; k <= i * (i + 1) / 2; ++k)
        {
            printf("%i ", k);
        }
        printf("\n");
    }

    return 0;
}
