#include <stdio.h>

int main()
{
    int x;
    scanf("%i", &x);

    int a = x & 1;
    int b = (x & 2) >> 1;
    int c = (x & 4) >> 2;

    printf("%i%i%i", c, b, a);

    return 0;
}