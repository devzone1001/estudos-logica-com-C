#include <stdio.h>

int main(void) {
  double n1, n2;
  printf("Informe dois números:\n");
  scanf("%lf %lf",&n1, &n2);
  if(n1 > n2){
    printf("O %.2lf é maior",n1);
  }
  else{
    printf("O %.2lf é maior",n2);
  }
  return 0;
}