#include <stdio.h>

int main(void) {
  int num;
  do{
    printf("Informe um número:");
    scanf("%i",&num);
  }while(num!=0);
  return 0;
}