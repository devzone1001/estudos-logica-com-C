#include <stdio.h>

int main(void) {
  int v[10];
  printf("Informe 10 números:");
  
  for(int i=0;i<10;i++){
    scanf("%d",&v[i]);
  }
  for(int i=0;i<10;i++){
    if(v[i]%2==0){
      printf("Números pares %d\n",v[i]);
    }
  }
  return 0;
}