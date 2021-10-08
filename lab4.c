#include <math.h>
#include <stdio.h>
#include <stdlib.h>

long double f1(long double x)
{
    long double y = sqrt(x + 1) - sqrt(x) - 0.5;
    return (y);
}

long double f2(long double l)
{
    long double j = -l - 1 / l;
    long double e = exp(j);
    return (e);
}


long double inh(long double t, long double y, long double u, int p)
{
    long double inter = 0;
    long double l = (y - t) / u;
    for (int i = 0; i < (u - 1); i++)
      {
          long double k = (t + i * l) + (l / 2);
          if (p == 1)
            inter = inter + f1(k);
          else if (p == 2)
            inter = inter + f2(k);
      }
    return (inter * l);
}

int main()
{
    long double n, a1, b1, a2, b2, del, integral, integral2;
    long double eps = 0.0001;
    a1 = 0;
    b1 = 1;
    a2 = 1;
    b2 = 2;
    n = 100;
    //scanf("%Lf\n", &eps);
    do
    {
        integral = inh(a1, b1, n, 1) * 1000 + inh(a2, b2, n, 2) * 1000;
        integral2 = inh(a1, b1, (2 * n), 1) * 1000 + inh(a2, b2, (2 * n), 2) * 1000;
        del = abs((integral2 - integral) * 10000000);
        del = del / 10000000000;
        del = del / 3;
        n = 2 * n;
    }
    while (del >= eps);
    printf("%.9Lf\n", integral / 1000);
    return 0;
}
