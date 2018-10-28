#include <stdio.h>
#include <stdlib.h>

int istPrim(int zahl)
{
  for (int i = 2; i < zahl/2; i++)
    {
      if ((zahl % i)==0){return 0;}
    }
  return 1;
}

int main()
{
  int input;
  scanf("%d", &input);
  printf("%i \n", istPrim(input));
  return 0;
}
