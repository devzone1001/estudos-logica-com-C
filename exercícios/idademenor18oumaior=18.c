#include <stdio.h>

int main(void) {
  float idade;
  printf("Informe a sua idade:");
  scanf("%f",&idade);
  if(idade < 18){
    printf("Menor de idade.");
  }
  else{
    printf("Maior de idade.");
  }
 
  return 0;
}