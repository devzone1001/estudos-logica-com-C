#include <stdio.h>

int main(void) {
  int num;
  double l, area , h, b, r;
  const double pi = 3.14;
  printf("Saiba a área geométrica:\n");
  printf("Digite 1 para quadrado 2 para triângulo e 3 para o circulo\n");
  scanf("%d", &num);
  
  switch (num){
    case 1:
    printf("Digite o lado do quadrado: ");
    scanf("%lf", &l);
    area = l * l;
    printf("A área do quadrado é: %0.2lf", area);
    break;
  
    case 2:
      printf("Digite o b e h do triângulo:" );
      scanf("%lf %lf", &b, &h);
      area = (b * h)/2;
      printf("A área do triângulo é: %0.2lf", area);
    break;
    
    case 3:
      printf("Digite o raio do círculo: ");
      scanf("%lf", &r);
      area = pi * (r * r);
      printf("A área do círculo é: %0.2lf", area);
      break;
    default:
      printf("Opção inválida");
    
  }
  return 0;
}