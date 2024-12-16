#include <math.h>
#include <stdio.h>
#include <stdlib.h>

double f(double x)
{
    if ((x >= 0) && (x <= 1))
        return (sqrt(x + 1) - sqrt(x) - 0.5);
    return (exp(-x - 1 / x));
}

double inh(double a, double b, double n)
{
    double inter = 0;
    double h = (b - a) / n;
    for (int i = 0; i < (n - 1); i++)
    {
        inter += f((a + i * h) + (h / 2));
    }
    return (inter * h);
}


int main()
{
    double n, a1, b1, del, integral, integral2;
    double eps;
    a1 = 0;
    b1 = 2;
    n = 100;
    scanf("%lf", &eps);
    integral = inh(a1, b1, n);
    do
    {
        integral2 = inh(a1, b1, (2 * n));
        del = fabs((integral2 - integral)) / 3;
        n = 2 * n;
        integral = integral2;
    }
    while (del >= eps);
    printf("%.9f\n", integral);
    return 0;
}
