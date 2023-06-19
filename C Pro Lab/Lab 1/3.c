#include <stdio.h>

int trailing_zeros_binary(int num);
int trailing_zeros_decimal(int num);
int num_set_bits(int num);

int main()
{
    int x;
    scanf("%i", &x);
    printf("%i\n", num_set_bits(x));

    return 0;
}

int trailing_zeros_binary(int num)
{
    int result = 0;
    while (!(num & 1))
    {
        result++;
        num = num >> 1;
    }
    return result;
}

int trailing_zeros_decimal(int num)
{
    int result = 0;
    while (!(num % 10))
    {
        result++;
        num /= 10;
    }
    return result;
}


// O(log(n))
int num_set_bits(int num)
{
    int result = 0;
    while (num)
    {
        result += num % 2;
        num /= 2;
    }
    return result;
}