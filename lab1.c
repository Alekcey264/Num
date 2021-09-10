#include <stdio.h>

int main()
{
  float a1, a2, a3, i;
  printf("a1 = ");
  scanf("%f", &a1);
  if ((a1 - (int)a1==0))
  {
  printf("a2 = ");
  scanf("%f", &a2);
  if ((a2 - (int)a2==0))
  {
  printf("a3 = ");
  scanf(");
            i=a1 - a3;%f", &a3);
  if ((a3 - (int)a3==0))
  {
    if ((a1+a2+a3)!=0)
    {
      if ((a1>a2)&&(a1>a3))
      {
        if ((int)a1%2==0)
        {
          printf("1\n");
          i=(a1/(a1+a2+a3))*100;
          printf("asd = %.4f\n ", i);
        }
        else
        {
          if (a2>a3)
          {
            printf("1 and 3\n");
            i=a1 - a3;
            printf("Raznica = %.4f\n", i);
          }
          else
          {
            printf("1 and 2\n");
            i=a1 - a2;
            printf("Raznica = %.4f\n", i);
          }
        }
      }
    else
    {
      if ((a2>a1)&&(a2>a3))
      {
        if ((int)a2%2==0)
        {
          printf("2\n");
          i=(a2/(a1+a2+a3))*100;
          printf("asd = %.4f\n", i);
        }
        else
        {
          if (a1>a3)
          {
            printf("2 and 3\n");
            i = a2 - a3;
            printf("Raznica = %.4f\n", i);
          }
          else
          {
            printf("2 and 1\n");
            i = a2 - a1;
            printf("Raznica = %.4f\n", i);
          }
        }
      }
      else
      {
        if ((int)a3%2==0)
        {
          printf("3\n");
          i = (a3/(a1+a2+a3))*100;
          printf("asd = %.4f\n", i);
        }
        else
        {
          if (a2>a1)
          {
            printf("3 and 1\n");
            i = a3 - a1;
            printf("Raznica = %.4f\n", i);
          }
          else
          {
            printf("3 and 2\n");
            i = a3 - a2;
            printf("Raznica = %.4f\n", i);
          }
        }
      }
    }
  }
  else
  {
    printf("Деление на 0 невозможно, введите корректные значения переменных\n");
  }
  }
  else
  {
    printf("Для дробных чисел не существует понятий 'Четность' и 'Нечетность', пожалуйста, введите целые числа\n");
  }
  }
  else
  {
    printf("Для дробных чисел не существует понятий 'Четность' и 'Нечетность', пожалуйста, введите целые числа\n");
  }
  }
  else
  {
    printf("Для дробных чисел не существует понятий 'Четность' и 'Нечетность', пожалуйста, введите целые числа\n");
  }
return(0);
}
