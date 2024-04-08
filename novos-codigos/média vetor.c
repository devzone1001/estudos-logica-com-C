#include <stdio.h>

int main(void) {
  int v[5];
  double m=0;
  printf("Informe 5 notas para fazer a média:\n");
  for(int i=0; i<5; i++){
    
    scanf("%d",&v[i]);
    if(v[i]<0 || v[i]>10){
      printf("Número inválido.");
      break;
      
    }
    m=m+v[i];
  }
  m= m/5;
  printf("Média:%.2lf",m);
  return 0;
}