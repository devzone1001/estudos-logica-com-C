#include <stdio.h>

int main(void) {
  int num;
  printf("Informe um número:");
  scanf("%i",&num);
  if(num>=10 && num <=20){
    printf("Esse número está entre 10 e 20");
  }
  else{
    printf("Esse número não está entre 10 e 20");
  }
  return 0;
}