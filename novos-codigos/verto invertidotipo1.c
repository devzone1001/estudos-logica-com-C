#include <stdio.h>

int main(void) {
  int matriz [] = {1,2,3,4,5,6};
  int tamanho = sizeof(matriz)/sizeof(matriz[0]);

  for(int i = 0;  i < tamanho /2; i ++){
    int temp = matriz[i];
    matriz[i] = matriz[tamanho - i - 1];
    matriz[tamanho - i - 1] = temp;
  }
  printf("Após inversão: \n");
  
  for(int i = 0; i < tamanho; i++){
    printf("%i", matriz[i]);
  }
  return 0;
}