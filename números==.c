#include <stdio.h>

int main(void) {
  float n1, n2;
  printf("Informe dois números:");
  scanf("%f%f",&n1,&n2);
  if(n1 == n2){
    printf("Os são iguais.");
  }
  else{
    printf("Os números não são iguais.");
  }
  return 0;
}