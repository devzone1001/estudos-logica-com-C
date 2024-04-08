#include <stdio.h>

int main(void) {
  double idade;
  printf("Informe a sua idade:");
  scanf("%lf",&idade);
  if(idade<18){
    printf("Menor de idade.");
  }
  else if(idade >=18 && idade <=65){
    printf("Adulto.");
  }
  else{
    printf("Idoso.");
  }
  
  return 0;
}