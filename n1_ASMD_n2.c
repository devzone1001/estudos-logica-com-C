#include <stdio.h>

int main(void) {
  double n1,n2,a,s,m,d;
  printf("Informe dois números:");
  scanf("%lf%lf",&n1,&n2);
  a = n1+n2;
  s = n1-n2;
  m = n1*n2;
  d = n1/n2;
  printf("Adição:%.2lf\n",a);
  printf("Subtração:%.2lf\n",s);
  printf("Multiplicação:%.2lf\n",m);
  printf("Divisão:%.2lf\n",d);
  return 0;
}