#include <stdio.h>

int main(void) {
  int i=1,soma=0,num;
  printf("Informe um número:");
  scanf("%i",&num);
  while(i<=num){
    
    soma=i+soma;
    i++;
  }
  printf("A soma dos números de 1 ate %i é: %i\n",num, soma);
  return 0;
}