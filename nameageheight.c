#include <stdio.h>

int main(void) {
  char nome [50];
  int idade;
  double altura;
  printf("Infome seu nome:");
  scanf("%s", nome);
  printf("Informe a sua idade:");
  scanf("%i", &idade);
  printf("Informe a sua altura:");
  scanf("%lf", &altura);
  printf("Nome:%s\n",nome);
  printf("Idade:%i\n",idade);
  printf("Altura:%.2lf\n",altura);
  return 0;
}