#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void fill(int n, int a[], int b[])
{
    int i;
    for (i = 0; i < n; i++)
      {
          a[i] = rand() % (10) + 1;
          b[i] = rand() % (10) + 1;
      }
}

int sozdanie(int a[], int b[], int ni)
{
    int k = 0;
    for (int i = 0; i < ni; i++)
    {
        for (int j = 0; j < ni; j++)
            {
                if (a[i] == b[j])
                    {
                       k = k + 1;
                    }
            }
    }
    return (k);
}

void vivod(int a[], int ni)
{
    for (int i = 0; i < ni; i++)
    {
        printf("%i ", a[i]);
    }
}

int proverka(int a[], int b[], int c[], int ni)
{
    int k = 0;
    for (int i = 0; i < ni; i++)
    {
        for (int j = 0; j < ni; j++)
          {
              if (a[i] == b[j])
                  {
                      c[k] = a[i];
                      k++;
                  }
          }
    }
    return (k);
}

int izbavlenie(int c[], int k)
{
    for (int i = 0; i <= (k - 1); i++)
    {
       for (int j = (i + 1); j <= k; j++)
          {
              if (c[i] == c[j])
                  {
                      for (int p = j; p <= k; p++)
                      c[p] = c[p+1];
                      k = k - 1;
                      j = j - 1;
                  }
          }
    }
    return(k);
}

int main()
{
    srand(time(NULL));
    int ni, k;
    scanf("%i", &ni);
    int A[ni];
    int B[ni];
    fill(ni, A, B);
    vivod(A, ni);
    printf("\n");
    vivod (B, ni);
    printf("\n");
    k = sozdanie(A, B, ni);
    int C[k];
    k = proverka(A, B, C, ni);
    k = izbavlenie (C, k);
    vivod(C, k);
    printf("\n");
    return 0;
}
