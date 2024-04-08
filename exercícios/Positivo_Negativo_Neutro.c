#include <stdio.h>

int main(void) {
  double num;
  printf("Informe um número:");
  scanf("%lf",&num);
  if(num>0){
    printf("%.2lf é Positivo",num);
  }
  else if(num<0){
    printf("%.2lf é Negativo",num);
  }
  else{
    printf("%.2lf é Neutro",num);
  }
  return 0;
}