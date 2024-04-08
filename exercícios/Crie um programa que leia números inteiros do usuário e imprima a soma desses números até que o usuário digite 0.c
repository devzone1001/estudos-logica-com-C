#include <stdio.h>
int main(){
int num,soma=0;

while(num!=0){
  printf("Informe um número:");
  scanf("%d",&num);
  soma=soma+num;
}
  printf("Soma = %d",soma);

    return 0;
}
