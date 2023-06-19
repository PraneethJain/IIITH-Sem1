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
        printf("%i ", sum);
    }

    return 0;
}