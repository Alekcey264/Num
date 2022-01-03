#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int i = 0, j, k[60], n = 0, x, absi, t = 0, p = 26, m = p, l = 0, max = 0, sum = 0;
    char str[50], b[10], *sp;
    bool a;
    char bykvs[35] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
    fgets(str, 50, stdin);
    for (i = 0; bykvs[i] != '\0'; i++)
    {
        k[t] = 0;
        for (j = 0; str[j] != '\0'; j++)
        {
            if (str[j] == bykvs[i])
            {
                k[t] = k[t] + 1;
                b[t] = bykvs[i];
                n = n + 1;
            }
        }
        t = t + 1;
    }
    for (i = 0; i < strlen(str); i++)
    {
        if (*(str + i) == ' ')
        {
            l++;
        }
    }
    for (i = 0; i < p; i++)
    {
        if (k[i] == 0)
        {
            for (j = i; j < m - 1; j++)
            {
                k[j] = k[j + 1];
                b[j] = b[j + 1];
            }
            p--;
            i--;
        }
    }
    //asd zxc fgh das iop qwe sad bnm tyu vbn asd jkl
    l++;
    for (i = 0; i < p; i++)
    {
        printf("%c   ", b[i]);
    }
    printf("\n");
    for (i = 0; i < p; i++)
    {
        printf("%i   ", k[i]);
    }
    printf("\n");
    str[strlen(str) - 1] = str[strlen(str)];
    char *words[l];
    int amount[l];
    i = 0;
    sp = strtok(str, " ");
    while (sp)
    {
        words[i] = sp;
        sp = strtok(NULL, " ");
        i++;
    }
    l = i;
    for (i = 0; i < l; i++)
    {
        for (j = 0; j < strlen(words[i]); j++)
        {
            for (x = 0; x < p; x++)
            {
                if (words[i][j] == b[x])
                {
                    sum = sum + k[x];
                }
            }
        }
        amount[i] = sum;
        if (sum > max)
        {
            max = sum;
            absi = i;
        }
        sum = 0;
    }
    printf("Frequency:\n");
    for (i = 0; i < l; i++)
    {
        printf("%s\t%i\n", words[i], amount[i]);
    }
    for (i = absi; i < l - 1; i++)
    {
        words[i] = words[i + 1];
        amount[i] = amount[i + 1];
    }
    l--;
    do
    {
        for (i = 0; i < l; i++)
        {
            if (amount[i] == max)
            {
                absi = i;
                a = true;
            }
            else
            {
                a = false;
            }
            if (a)
                break;
        }
        if (a)
        {
            for (i = absi; i < l - 1; i++)
            {
                words[i] = words[i + 1];
                amount[i] = amount[i + 1];
            }
        }
        else
            break;
        l--;
    } while (a);
    printf("Строка: ");
    for (i = 0; i < l; i++)
    {
        printf("%s ", words[i]);
    }
    printf("\n");
    return 0;
}
