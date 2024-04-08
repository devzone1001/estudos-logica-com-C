#include <stdio.h>

int main(void) {
  int v[5];
  double s=0;
  printf("Informe cinco números para fazer a soma:");
  for(int i=0; i< 5;i++){
    
    scanf("%d",&v[i]);
    s= s+v[i];
  }
  printf("Soma:%.2lf",s);
  return 0;
}