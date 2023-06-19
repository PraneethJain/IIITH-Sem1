#include <stdio.h>

int main()
{
    int x1, x2, x3;
    scanf("%i %i %i", &x1, &x2, &x3);

    if (x1 * x1 + x2 * x2 == x3 * x3 || x1 * x1 + x3 * x3 == x2 * x2 || x2 * x2 + x3 * x3 == x1 * x1)
    {
        printf("Pythogarean triplet!\n");
    }
    else
    {
        printf("Not a pythogarean triplet!\n");
    }

    return 0;
}