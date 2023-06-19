#include <stdio.h>

int main()
{
    int t, n, m, cur, max, max_pos, count;
    scanf("%i", &t);
    for (int i = 0; i < t; ++i)
    {
        scanf("%i %i", &n, &m);
        int elective[m];
        for (int j = 0; j < m; ++j)
            elective[j] = 0;
        for (int j = 0; j < n; ++j)
        {
            scanf("%i", &cur);
            elective[cur - 1] += 1;
        }

        max = elective[0];
        max_pos = 0;
        for (int j = 1; j < m; ++j)
        {
            if (elective[j] > max)
            {
                max = elective[j];
                max_pos = j;
            }
        }
        count = 0;
        for (int j = 0; j < m; ++j)
        {
            if (max == elective[j])
                ++count;
        }

        if (count == 1)
            printf("%i\n", max_pos + 1);
        else
            printf("-1\n");
    }

    return 0;
}