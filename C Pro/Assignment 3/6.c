#include <stdio.h>

void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

int do_swap(int *arr, int start, int end)
{
    for (int i = start; i < end; ++i)
        if (arr[i] == arr[end])
            return 0;
    return 1;
}

void perms(int *arr, int start, int end, int *to_print)
{
    if (start == end)
    {
        for (int i = 0; i < end; ++i)
            if (arr[i])
                printf("%i ", to_print[i]);

        printf("\n");
    }
    else
    {
        for (int i = start; i < end; ++i)
            if (do_swap(arr, start, i))
            {
                swap(arr + start, arr + i);
                perms(arr, start + 1, end, to_print);
                swap(arr + start, arr + i);
            }
    }
}

int main()
{
    int n, k;
    scanf("%i %i", &n, &k);
    int arr[n];
    for (int i = 0; i < n; ++i)
        scanf("%i", &arr[i]);

    int bits[n];
    for (int i = 0; i < k; ++i)
        bits[i] = 1;
    for (int i = k; i < n; ++i)
        bits[i] = 0;
    
    perms(bits, 0, n, arr);

    return 0;
}