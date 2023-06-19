#include <stdio.h>

int main()
{
    int t, n;
    scanf("%i", &t);
    for (int i = 0; i < t; ++i)
    {
        scanf("%i", &n);
        int A[n];
        for (int j = 0; j < n; ++j)
        {
            scanf("%i", &A[j]);
        }
        int max = A[0] + A[n - 1];
        int cur;
        for (int i = 0; i < n - 1; ++i)
        {
            cur = A[i] + A[i + 1];
            if (cur > max)
                max = cur;
        }
        printf("%i\n", max);
    }

    return 0;
}