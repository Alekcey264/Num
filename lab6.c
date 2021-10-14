#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void fill(int n, int a[])
{
    int i;
    for (i = 0; i < n; i++)
      {
          a[i] = rand() % (10) + 1;
      }
}


int main()
{
    srand(time(NULL));
    int ni, i, nj, j, o;
    int p = 0;
    int k = 0;
    scanf("%i", &ni);
    nj = ni;
    int A[ni];
    int B[nj];
    fill(ni, A);
    fill(nj, B);
    for (i = 0; i < ni; i++)
    {
        printf("%i ", A[i]);
    }
    printf("\n");
    for (j = 0; j < nj; j++)
    {
        printf("%i ", B[j]);
    }
    printf("\n");
    for (i = 0; i < ni; i++)
    {
        for (j = 0; j < nj; j++)
            {
              if (A[i] == B[j])
                  {
                      k++;
                  }
            }
    }
    int C[k];
    k = 0;
    for (i = 0; i < ni; i++)
    {
        for (j = 0; j < nj; j++)
          {
              if (A[i] == B[j])
                  {
                      C[k] = A[i];
                      k++;
                  }
          }
    }
    for (i = 0; i <= (k - 1); i++)
    {
       for (j = (i + 1); j <= k; j++)
          {
              if (C[i] == C[j])
                  {
                    for (p = j; p <= k; p++)
                    C[p] = C[p+1];
                    k = k - 1;
                    j = j - 1;
                  }
          }
    }
    o = k;
    for (k = 0; k < o; k++)
    {
        printf("%i ", C[k]);
    }
    printf("\n");
    return 0;
}
