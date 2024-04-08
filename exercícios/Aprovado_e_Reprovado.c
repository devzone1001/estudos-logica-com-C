    #include <stdio.h>

    int main(void) {
      double n1,n2,n3,media;
      printf("Informe três notas, que cada nota totalize no máximo 10, para fazer a média:\n");
      scanf("%lf%lf%lf",&n1,&n2,&n3);
      media = (n1+n2+n3)/ 3;
      if(media>=7 && media <=10){
        printf("Aprovado com %.2lf de média.",media);
      }
      else if(media>=0 && media <7){
        printf("Reprovado com %.2lf de média.",media);
      }
      else{
        printf("Nota %.2lf de média invalido.",media);
      }
      return 0;
    }