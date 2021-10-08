#include <stdio.h>

int krec (int num)
{
    return num > 0 ? 1 + krec(num / 10) : 0;
      //return 1 + krec(num / 10);
    //return 0;
}

int kch (int num)
{
    int i;
      for (i = 0; num > 0; i++)
      {
          num = num / 10;
      }
    return i;
}

int main()
{
    int i;
    scanf("%i", &i);
    printf("При рекурсии количество = %i\n", krec(i));
    printf("При цикле количество = %i\n", kch(i));
    return 0;
}
