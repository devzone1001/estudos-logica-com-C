#include <stdio.h>

int main(void) {
  int a[10],b[10];
  int i;
  for(i=0; i<10;i++){
    printf("%d - Digite os dados para o vetor A:", i);
    scanf("%d",&a[i]);
  }
  printf("\nSaida de dados do vetor A:\n");
  for(i=0; i<10;i++){
    printf("A[%d] = %d \n", i,a[i]);
  }
  printf("\nSaida de dados do vetor B:\n");
  for(i=0; i<10;i++){
    b[i]=a[i] *10;
    printf("b[%d] = %d \n", i,b[i]);
  }
  return 0;
}