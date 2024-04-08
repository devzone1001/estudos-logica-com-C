#include <stdio.h>

int main(void) {

  char vogal;
  printf("Digite uma vogal: ");
  scanf("%c", &vogal);

  switch(vogal){
  case 'a':
  case 'e':
  case 'i':
  case 'o':
  case 'u':
    printf("É uma vogal");
    break;
  default:
    printf("Você digitou uma consoante");
  }
  return 0;
}