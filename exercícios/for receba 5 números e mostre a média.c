#include <stdio.h>

int main(void) {
  int i, n5;
  double notas,media=0;
  for(i=1, n5=5;i<=n5;i++){
    printf("Informe 5 notas:");
    scanf("%lf",&notas);
    media=media+notas;
  }
  media=media/n5;
  printf("Media:%.2lf",media);
  
  return 0;
}