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
    float f, sh;
    float x = 0;
    printf("Введите положительный шаг для переменной x: ");
    scanf("%f", &sh);
    printf("x\t\t f(x)\n---------------------\n");
    do
    {
        f = perv(x);
        if (f > 0)
        printf("%.1f\t\t %.1f\n", x, f);
        else
        printf("%.1f\t\t%.1f\n", x, f);
        x = x + sh;
    }
    while ((x >= 0) && (x <= 1));
    do
    {
        f = vtor(x);
        if (f > 0)
        printf("%.1f\t\t %.1f\n", x, f);
        else
        printf("%.1f\t\t%.1f\n", x, f);
        x = x + sh;
    }
    while ((x > 1) && (x <= 2.1));
    return 0;
}
