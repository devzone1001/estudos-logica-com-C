#include <stdio.h>

int main() {
  int num;

  while (1) {
    printf("Escreva um número 1 a 10 para ser sorteado:");
    scanf("%d", &num);

    if (num >= 1 && num <= 10) {
      if (num == 5) {
        printf("Você acertou!\n");
        break;
      } else {
        printf("Você errou!\n");
      }
    } else {
      printf("Número fora do intervalo permitido.\n");
    }
  }

  return 0;
}
