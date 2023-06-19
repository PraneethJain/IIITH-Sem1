#include <stdio.h>

void comb(int n, int r, int *set, int *subset, int cur_subset, int cur_set)
{
    if (cur_subset == r)
    {
        for (int i = 0; i < r; ++i)
        {
            printf("%i ", subset[i]);
        }
        printf("\n");
        return;
    }
    if (r - cur_subset > n - cur_set)
        return;

    if (cur_set >= n)
        return;

    subset[cur_subset] = set[cur_set];
    comb(n, r, set, subset, cur_subset + 1, cur_set + 1);
    comb(n, r, set, subset, cur_subset, cur_set + 1);
}

int main()
{
    int n, k;
    scanf("%i %i", &n, &k);
    int arr[n];
    for (int i = 0; i < n; ++i)
        scanf("%i", &arr[i]);
    int subset[k];
    comb(n, k, arr, subset, 0, 0);
    return 0;
}