#include <stdio.h>

int main(void) {
  int num1, num2, soma, sub, mult, div, op;

  do {
    printf("\nSeleciona uma operação:\n1 - Soma\n2 - Subtração\n3 - Multiplicação\n4 - Divisão\n5 - Sair\n");
    scanf("%d", &op);

    switch(op) {
      case 1:
        printf("\nDigite o primeiro número: "); 
        scanf("%d", &num1);
        printf("Digite o segundo número: ");
        scanf("%d", &num2);
        soma = num1 + num2;
        printf("A soma é: %d\n", soma);
        break;

      case 2: 
        printf("\nDigite o primeiro número: ");
        scanf("%d", &num1);
        printf("Digite o segundo número: ");
        scanf("%d", &num2);
        sub = num1 - num2;
        printf("A subtração é: %d\n", sub);
        break;

      case 3:
        printf("\nDigite o primeiro número: ");
        scanf("%d", &num1);
        printf("Digite o segundo número: ");
        scanf("%d", &num2);
        mult = num1 * num2;
        printf("A multiplicação é: %d\n", mult);
        break;

      case 4: 
        do {
          printf("\nDigite o primeiro número: "); 
          scanf("%d", &num1);
          printf("Digite o segundo número: ");
          scanf("%d", &num2);

          if (num2 == 0) {
            printf("Não é possível dividir por 0. Tente novamente.\n");
          }
        } while (num2 == 0);

        div = num1 / num2;
        printf("A divisão é: %d\n", div);
        break;

      case 5:
        printf("\nSaindo...\n");
        break;

      default:
        printf("Operação inválida. Tente novamente.\n");
    }

  } while (op != 5);

  return 0;
}
