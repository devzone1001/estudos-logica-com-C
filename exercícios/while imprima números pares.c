#include <stdio.h>

int main(void) {
  int i=2,num;
  printf("Informe um número:");
  scanf("%i",&num);
  while(i<=num){
    
    printf("%i\n",i);
    i=i+2;
  }
  return 0;
}