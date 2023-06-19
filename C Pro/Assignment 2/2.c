#include <stdio.h>

int min(int a, int b, int c)
{
    int min = a;
    if (b < min)
        min = b;
    if (c < min)
        min = c;

    return min;
}

int main()
{
    int t, m, s, o;
    scanf("%i", &t);
    for (int i = 0; i < t; ++i)
    {
        scanf("%i %i %i", &m, &s, &o);
        printf("%i\n", min(m, s, o/2));
    }

    return 0;
}
