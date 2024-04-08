#include <stdio.h>

int main(void) {
  int i, soma;
  for(i=1,soma=0; i<=50; i++){
  soma=i+soma;
    
  }
  printf("Soma:%i",soma);
  return 0;
}