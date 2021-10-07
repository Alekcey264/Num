#include <stdio.h>

int krec (int num)
{
    if (num > 0)
      return 1 + krec(num / 10);
    return 0;
}

int kch (int num)
{
  int u = 0;
    for (int i = 0; num > 0; i++)
    {
      u++;
      num = num / 10;
    }
  return u;
}

int main()
{
    int i;
    scanf("%i", &i);
    printf("При рекурсии количество = %i\n", krec(i));
    printf("При цикле количество = %i\n", kch(i));
    return 0;
}
