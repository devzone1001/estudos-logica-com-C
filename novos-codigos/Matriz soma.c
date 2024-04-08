#include <stdio.h>

int main(void) {
  int matriz[3][3] ,i ,j,soma=0;
  printf("Digite valores para os elementos de uma matriz\n\n");

  for(int i =0; i<3;i++){
    for(int j=0; j<3;j++){
      printf("\nElementos [%d][%d] = ",i,j);
      scanf("%d",&matriz[i][j]);
      soma+=matriz[i][j];
    }
  }
  printf("Soma:%d",soma);
  return 0;
}