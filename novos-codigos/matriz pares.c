#include <stdio.h>

int main(void) {
  int matriz[3][3],i,j;
  printf("Digite valores para os elementos de uma matriz\n");
  for(i=0;i<3;i++){
    for(j=0;j<3;j++){
      printf("Matriz [%d][%d]",i,j);
      scanf("%d",&matriz[i][j]);
    }
  }
  for(i=0;i<3;i++){
    for(j=0;j<3;j++){
      if(matriz[i][j]%2==0){
        printf("Esses números são pares:%d\n",matriz[i][j]);
      }
    }
  }
  return 0;
}