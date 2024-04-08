#include <stdio.h>

int main(void) {
  int i=1,tentativas=3,senha; 
  
  while(i<=tentativas){
    printf("Qual é a senha?\n");
    scanf("%i",&senha);
    if(senha==1234){
      printf("Senha correta\n");
      i++;
      break;
    }
    else{
      printf("Senha incorreta\n");
      i++;
    }
    if(i>tentativas){
      printf("O número máximo de tentativas foi atingido. Acesso bloqueado. \n");
    }
  }
  
  return 0;
}