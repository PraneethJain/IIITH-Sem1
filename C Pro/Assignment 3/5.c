#include <stdio.h>

void swap(char *x, char *y)
{
    char temp = *x;
    *x = *y;
    *y = temp;
}

int do_swap(char *arr, int start, int end)
{
    for (int i = start; i < end; ++i)
        if (arr[i] == arr[end])
            return 0;
    return 1;
}

void perms(char *arr, int start, int end)
{
    if (start == end)
    {
        int cur_sum = 0;
        for (int i = 0; i < end; ++i)
        {
            if (arr[i] == '+')
                cur_sum += 1;
            else
                cur_sum -= 1;
            if (cur_sum < 0)
                return;
        }
        for (int i = 0; i < end; ++i)
            printf("%c", arr[i]);
        printf("\n");
        return;
    }
    for (int i = start; i < end; ++i)
        if (do_swap(arr, start, i))
        {
            swap(arr + start, arr + i);
            perms(arr, start + 1, end);
            swap(arr + start, arr + i);
        }
}

int main()
{
    int n;
    scanf("%i", &n);
    char arr[2*n];
    for (int i = 0; i < n; ++i)
    {
        arr[i] = '+';
    }
    for (int i = n; i < 2*n; ++i)
    {
        arr[i] = '-';
    }
    perms(arr, 0, 2*n);
    return 0;
}