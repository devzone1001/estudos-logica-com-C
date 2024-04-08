#include <stdio.h>

int main(void) {
  int num;
  printf("Informe um número:");
  scanf("%i",&num);
  if(num<5 || num>15){
    printf("O número não está entre 5 e 15");
  }
  else{
    printf("O número está entre 5 e 15");
  }
  return 0;
}