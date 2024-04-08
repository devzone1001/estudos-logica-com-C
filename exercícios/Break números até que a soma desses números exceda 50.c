#include <stdio.h>
int main(void) {
  int num, soma = 0;

  for(int i = 1; i != num; i++){
    printf("Informe um número: ");
    scanf("%d", &num);
    soma += num;
    if(soma == 50){
      printf("A soma dos números é igual a 50");
      break;
    } else if (soma > 50){
      printf("A soma dos números é maior que 50");
      break;
    } 
      
  }
  return 0;
}