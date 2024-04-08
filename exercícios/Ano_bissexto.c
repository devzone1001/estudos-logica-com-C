#include <stdio.h>

int main(void) {
  int ano;
  printf("Informe um ano:");
  scanf("%i",&ano);
  if(ano % 4 == 0 && ano % 100 != 0 || ano %400 == 0){
    printf("Esse ano é bissexto.");
  }
  else{
    printf("Esse ano não é bissexto.");
  }
  return 0;
}