#include <math.h>
#include <stdio.h>

float perv(float t)
{
    float k = sqrt(t + 1) - sqrt(t) - 0.5;
    return (k);
};

float vtor(float j)
{
    float a = - j - (1 / j);
    float p = exp(a);
    return (p);
};

int main()
{
    float f, x, sh;
    printf("Введите положительный шаг для переменной x: ");
    scanf("%f", &sh);
    printf("x\t\t f(x)\n---------------------\n");
    for (x = 0; x <= 1.0; x += sh)
    {
        f = perv(x);
        if (f >= 0)
        printf("%.1f\t\t %.1f\n", x, f);
        else
        printf("%.1f\t\t%.1f\n", x, f);
    }
    for (x = 1.0; x <= 2.1; x += sh)
    {
        f = vtor(x);
        if (f >= 0)
        printf("%.1f\t\t %.1f\n", x, f);
        else
        printf("%.1f\t\t%.1f\n", x, f);
    }
    return 0;
}
