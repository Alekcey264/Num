#include <math.h>
#include <stdio.h>

int main()
{
    float x, y, z, ct;
    printf("x= ");
    scanf("%f", &x);
    float pi = M_PI;
    if ((x != (int)x) && (pow(2, x) >= -1) && (pow(2, x) <= 1))
    {
        ct = 1 / tan(pi * x);
        y = ct + acos(pow(2, x));
        printf("y= %f \n", y);
    }
    else
    {
        printf("Переменная x не удовлетворяет области определения функции y = ctg(pi*x) + arccos(2^x)\n");
    }
    if (x < 0)
    {
        z = -1;
    }
    else
    {
        if (x > 0)
        {
            z = 1;
        }
        else
        {
            z = 0;
        }
    }
    printf("z= %f \n", z);
    return 0;
}
