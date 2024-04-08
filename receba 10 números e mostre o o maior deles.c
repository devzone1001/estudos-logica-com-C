#include <stdio.h>

int main(void) {
  int i, num, max = 0;

  for (i = 1; i <= 3; i++) {
    printf("Informe o número %d: ", i);
    scanf("%i", &num);

    if (num > max) {
      max = num;
    }
  }

  printf("O maior número é: %i", max);

  return 0;
}
