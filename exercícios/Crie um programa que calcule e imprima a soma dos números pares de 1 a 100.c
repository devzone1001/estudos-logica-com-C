#include <stdio.h>

int main(void) {
  int i, soma;
  for(i=0,soma=0;i<=100;i=i+2){
    printf("%i\n",i);
    soma=i+soma;
  }
  printf("Soma %i",soma);
  return 0;
}
