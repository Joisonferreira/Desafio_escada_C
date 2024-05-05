#include <stdio.h>

int main(void)
{

  // Loop para construir as linhas da pirâmide
  for (int i = 0; i < 5; i++)
  {
    // Espaços em branco à esquerda
    for (int j = 0; j < 5 - i - 1; j++)
    {
      printf(" ");
    }

    // Tijolos esquerda
    for (int j = 0; j <= i; j++)
    {
      printf("#");
    }

    // Espaço entre as pirâmides
    printf("  ");

    // Tijolos direita
    for (int j = 0; j <= i; j++)
    {
      printf("#");
    }

    // Nova linha para a próxima linha da pirâmide
    printf("\n");
  }

  system("pause");
  return 0;
}
