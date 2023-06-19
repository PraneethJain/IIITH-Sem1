#include <stdio.h>
#include <stdlib.h>
#include <string.h>

const int fac[9] = {1, 1, 2, 6, 24, 120, 720, 5040, 40320};

void swap(char *s1, char *s2)
{
    char temp = *s1;
    *s1 = *s2;
    *s2 = temp;
}

int count = 0;
void get_all_permutations(char *s, int start, int end, char **perms)
{
    if (start == end)
    {
        strcpy(perms[count++], s);
        return;
    }

    for (int i = start; i < end; ++i)
    {
        swap(s + start, s + i);
        get_all_permutations(s, start + 1, end, perms);
        swap(s + start, s + i);
    }
}

int compare(const void *x, const void *y)
{
    return strcmp(*(char **)x, *(char **)y);
}

int main()
{
    char s[9];
    scanf("%s", s);

    int len = strlen(s);
    int num_of_perms = fac[len];
    char **perms = (char **)malloc(sizeof(char *) * num_of_perms);
    for (int i = 0; i < num_of_perms; ++i)
    {
        *(perms + i) = (char *)malloc(sizeof(char) * len);
    }

    for (int i = 0; i < len; ++i)
    {
        for (int j = 0; j < len - 1; ++j)
        {
            if (s[j] > s[j - 1])
            {
                char temp = s[j];
                s[j] = s[j + 1];
                s[j + 1] = temp;
            }
        }
    }

    int hashmap[26] = {0};
    for (int i = 0; i < len; ++i)
        ++hashmap[s[i] - 97];

    for (int i = 0; i < 26; ++i)
        num_of_perms /= fac[hashmap[i]];

    printf("%i\n", num_of_perms);

    get_all_permutations(s, 0, len, perms);

    qsort(perms, fac[len], sizeof(char *), compare);

    printf("%s\n", perms[0]);
    for (int i = 1; i < fac[len]; ++i)
        if (strcmp(perms[i], perms[i - 1]) != 0)
            printf("%s\n", perms[i]);

    return 0;
}