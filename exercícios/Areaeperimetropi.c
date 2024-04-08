#include <stdio.h>

int main(void) {
  double const pi = 3.141592;
  double raio, area, perimetro;
  printf("Informe o raio:");
  scanf("%lf",&raio);
  area = pi * raio * raio;
  perimetro = 2 * pi * raio;
  printf("Area:%.4lf",area);
  printf("\nPerímetro:%.4lf",perimetro);
  return 0;
}