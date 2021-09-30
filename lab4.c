#include <math.h>
#include <stdio.h>
#include <stdlib.h>

double f1(double x)
{
  double y = sqrt(x + 1) - sqrt(x) - 0.5;
  return (y);
}

double f2(double l)
{
  double j = -l - 1 / l;
  double e = exp(j);
  return (e);
}

double inh(double t, double y, double u)
{
  double inter = 0;
  double l = (y - t) / u;
  for (int i = 0; i < (u - 1); i++)
    {
      double k = (t + i * l) + (l / 2);
      inter = inter + f1(k);
    }
    return (inter * l);
}

double inh2(double t, double y, double u)
{
  double inter = 0;
  double l = (y - t) / u;
  for (int i = 0; i < (u - 1); i++)
    {
      double k = (t + i * l) + (l / 2);
      inter = inter + f2(k);
    }
    return (inter * l);
}

int main()
{
    double n, a1, b1, a2, b2, del, integral, integral2;
    double eps = 0.1;
    a1 = 0;
    b1 = 1;
    a2 = 1;
    b2 = 2;
    n = 1000;
    do
    {
    integral = inh(a1, b1, n) + inh2(a2, b2, n);
    integral2 = inh(a1, b1, (2 * n)) + inh2(a2, b2, (2 * n));
    del = abs(integral2 - integral) / 3;
    n = 2 * n;
    }
    while (del >= eps);
    printf("%.5f\n", integral);
    return 0;
}
