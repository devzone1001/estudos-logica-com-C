#include <stdio.h>

int main(void) {
  int matriz[2][2], i, j;
  double media=0;
  
  printf("Digite valores para os elementos de uma matriz\n");

  for(int i= 0;i<2; i++){
    for(int j= 0;j<2; j++){
      printf("Matriz [%d][%d]\n",i,j);
      scanf("%d",&matriz[i][j]);
      media=media+matriz[i][j];
      if(matriz[i][j]<0 || matriz[i][j]>10){
        printf("Número inválido\n");
        return 1;
      }
      media=media/4;
    }
  }
  printf("Média:%.2lf",media);
  return 0;
}