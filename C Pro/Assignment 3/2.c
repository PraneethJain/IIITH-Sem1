#include <stdio.h>
#include <limits.h>

#define int long long

int mod(int x)
{
    return x > 0 ? x : -x;
}

int main()
{
    int n;
    scanf("%lli", &n);

    int stones[n];
    int total_sum = 0;
    for (int i = 0; i < n; ++i)
    {
        scanf("%lli", &stones[i]);
        total_sum += stones[i];
    }
    int limit = 1 << n;
    int min_sum = INT_MAX;
    for (int i = 1; i < limit - 1; ++i)
    {
        int cur = i;
        int cur_sum = 0;
        for (int counter = 0; counter < n; ++counter)
        {
            if (cur & (1 << counter))
                cur_sum += stones[counter];
        }
        int res_sum = mod(total_sum - 2 * cur_sum);
        if (res_sum <= min_sum)
            min_sum = res_sum;
    }
    if (min_sum == INT_MAX)
    {
        printf("%lli", total_sum);
    }
    else
    {
        printf("%lli\n", min_sum);
    }

    return 0;
}   