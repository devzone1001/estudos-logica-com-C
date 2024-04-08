#include <stdio.h>

int main(void) {
  double idade, salario;
  printf("Infome a sua idade:");
  scanf("%lf",&idade);
  printf("Infome seu salário:");
  scanf("%lf",&salario);
  if(idade >25 && salario <3000){
    printf("Condição Atendida");
  }
  else{
    printf("Condição NÃO Atendida");
  }
  return 0;
}