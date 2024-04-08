#include <stdio.h>

int main(void) {
  int n1,n2;
  printf("Informe dois números:\n");
  scanf("%i%i",&n1,&n2);
  if(n1>0 && n2>0){
    printf("Os dois são positivos");
  }
  else if(n1>0 || n2>0){
    printf("Um deles é positivo.");
  }
  else{
    printf("Os dois são negativos");
  }
  
  return 0;
}