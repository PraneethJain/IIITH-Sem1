#include <stdio.h>

int main()
{
    int n;
    scanf("%i", &n);
    int fib[20] = {0, 1};

    int a = 0, b = 1, temp;
    printf("%i %i ", a, b);

    for (int i = 2; i < n; ++i)
    {
        temp = b;
        b += a;
        a = temp;
        printf("%i ", b);
    }


    return 0;
}  