#include <stdio.h>

int main(void) {
  int dinheiro, notas;
  printf("Informe quantia em dinheiro:");
  scanf("%d",&dinheiro);
  if(dinheiro>=200){
    notas=dinheiro / 200;
    dinheiro=dinheiro %200;
    printf("%d notas de 200.\n",notas);
  }
  if(dinheiro>=100){
    notas=dinheiro / 100;
    dinheiro=dinheiro %100;
    printf("%d notas de 100.\n",notas);
  }
  if(dinheiro>=50){
    notas=dinheiro / 50;
    dinheiro=dinheiro %50;
    printf("%d notas de 50.\n",notas);
  }
  if(dinheiro>=20){
    notas=dinheiro / 20;
    dinheiro=dinheiro %20;
    printf("%d notas de 20.\n",notas);
  }
  if(dinheiro>=10){
    notas=dinheiro / 10;
    dinheiro=dinheiro %10;
    printf("%d notas de 10.\n",notas);
  }
  if(dinheiro>=5){
    notas=dinheiro / 5;
    dinheiro=dinheiro %5;
    printf("%d notas de 5.\n",notas);
  }
  if(dinheiro>=2){
    notas=dinheiro / 2;
    dinheiro=dinheiro %2;
    printf("%d notas de 2.\n",notas);
  }
  if(dinheiro>=1){
    notas=dinheiro / 1;
    dinheiro=dinheiro %1;
    printf("%d notas de 1.\n",notas);
  }
  return 0;
}