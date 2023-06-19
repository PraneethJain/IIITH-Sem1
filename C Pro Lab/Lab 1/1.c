#include <stdio.h>

int main()
{
    int h, m, s;
    scanf("%i:%i:%i", &h, &m, &s);
    float result = 0;

    printf("%i", h * 60 + m);

    return 0;
}
