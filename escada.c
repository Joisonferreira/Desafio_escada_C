#include <stdio.h>

int main(void)
{
  int x = 0;
  int y = 0;

  for (x = 0; x < 5; x++)
  {
    for (y = 0; y < 5; y++)
    {
      if ((x + y) < 4)
      {
        printf(" ");
      }
      else
      {
        printf("X");
      }
        }
    printf("\n");
  }

  system("pause");
  return 0;
}