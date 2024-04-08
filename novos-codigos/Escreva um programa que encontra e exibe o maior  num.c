#include <stdio.h>

int main(void) {
  int v[10];
  printf("Informe dez números:");
  int maior;
  for(int i =0; i<10;i++){
    scanf("%d",&v[i]);
  }
  maior=v[0];
  for(int i =0; i<10;i++){
    if(v[i]>maior){
      maior=v[i];
    }
  }
  printf("Maior:%d", maior);
  return 0;
}