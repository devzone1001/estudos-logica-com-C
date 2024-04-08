#include <stdio.h>

int main(void) {
  double n1,n2,n3,media;
  printf("Infome três notas para calcular a média:");
  scanf("%lf%lf%lf",&n1,&n2,&n3);
  media = (n1 + n2 + n3) / 3;
  printf("A média é:%.2lf\n",media);
  return 0;
}