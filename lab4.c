#include <math.h>
#include <stdio.h>
#include <stdlib.h>

double inh(double t, double y, double u, int p)
{
    double inter = 0;
    double l = (y - t) / u;
    for (int i = 0; i < (u - 1); i++)
      {
          double k = (t + i * l) + (l / 2);
          if (p == 1)
            inter = inter + (sqrt(k + 1) - sqrt(k) - 0.5);
          else if (p == 2)
            inter = inter + exp(-k - 1 / k);
      }
    return (inter * l);
}


int main()
{
    double n, a1, b1, b2, del, integral, integral2;
    double eps;
    a1 = 0;
    b1 = 1;
    b2 = 2;
    n = 100;
    scanf("%lf", &eps);
    do
    {
        integral = inh(a1, b1, n, 1) + inh(b1, b2, n, 2);
        integral2 = inh(a1, b1, (2 * n), 1) + inh(b1, b2, (2 * n), 2);
        del = fabs((integral2 - integral)) / 3;
        n = 2 * n;
    }
    while (del >= eps);
    printf("%.9f\n", integral);
    return 0;
}
