#include <stdio.h>

int main()
{
    int n, cur, sum = 0;
    scanf("%i", &n);
    int B[n];
    for (int i = 0; i < n; ++i)
    {
        scanf("%i", &cur);
        sum += cur;
        B[i] = sum;
    }

    int q, l, r;
    scanf("%i", &q);
    for (int i = 0; i < q; ++i)
    {
        scanf("%i %i", &l, &r);
        printf("%i\n", B[r] - (l ? (B[l - 1]) : 0));
    }
}