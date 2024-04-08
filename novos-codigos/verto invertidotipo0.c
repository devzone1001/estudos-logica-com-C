#include <stdio.h>

int main(void) {
  int vetor [10],i;

  printf("Informe alguns dados:\n");

  for(i=0;i<10;i++){
    scanf("%d",&vetor[i]);
  }

  for(i=9;i>-1;i--){
    printf("%d ",vetor[i]);
  }
  return 0;
}