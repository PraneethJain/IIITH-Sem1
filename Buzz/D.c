#include <stdio.h>
#include <stdlib.h>

int min(int a, int b)
{
    return a > b ? b : a;
}

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int n;
    scanf("%i", &n);
    int a[n];
    for (int i = 0; i < n; ++i)
    {
        scanf("%i", &a[i]);
    }

    int negative_prefix[n + 1];
    negative_prefix[n] = 0;
    int ans;
    for (int i = n - 1; i >= 0; --i)
    {
        if (a[i] > 0)
        {
            negative_prefix[i] = negative_prefix[i + 1];
        }
        else
        {
            negative_prefix[i] = negative_prefix[i + 1] + 1;
        }
    }

    int cur = 0;
    ans = n;
    for (int i = 0; i <= n - 2; ++i)
    {
        if (a[i] >= 0)
        {
            cur += 1;
        }
        ans = min(cur + negative_prefix[i + 1], ans);
    }

    printf("%i", ans);

    return 0;
}
