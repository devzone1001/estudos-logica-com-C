#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  
  int seg, min, hr;
  printf("Infome o tempo que você que saber em segundos:");
  scanf("%d",&seg);
  hr=seg/3600;
  seg=seg -(3600*hr);

  min = seg / 60;
  seg = seg - (60*min);

  printf("Horas: %d. \n", hr);
  printf("Minutos: %d.\n", min);
  printf("Segundos: %d.\n", seg);

  system("Pause");
  
  return 0;
}