#include <math.h>
#include <stdio.h>

float perv(float t)
{
    float k = sqrt(t + 1) - sqrt(t) - 0.5;
    return (k);
}

float vtor(float j)
{
    float a = - j - (1 / j);
    float p = exp(a);
    return (p);
}

int main()
{
    long double sh, f;
    long double x = 0;
    printf("Введите положительный шаг для переменной x: ");
    scanf("%Lf", &sh);
    printf("x\t\t f(x)\n---------------------\n");
    do
    {
        f = perv(x);
        if (f > 0)
        printf("%.10Lf\t\t %.4Lf\n", x, f);
        else
        printf("%.10Lf\t\t%.4Lf\n", x, f);
        x = x + sh;
        x = x * 1000000000;
        x = floor(x);
        x = x / 1000000000;

    }
    while ((x >= 0) && (x <= 1));
    do
    {
        f = vtor(x);
        if (f > 0)
        printf("%.10Lf\t\t %.4Lf\n", x, f);
        else
        printf("%.10Lf\t\t%.4Lf\n", x, f);
        x = x + sh;
        x = x * 1000000000;
        x = floor(x);
        x = x / 1000000000;
    }
    while ((x > 1) && (x <= 2));
    return 0;
}
