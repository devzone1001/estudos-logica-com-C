#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// estrutura Aluno
typedef struct{
  int matricula;
  char nome[100];
  float nota1;
  float nota2;
} Aluno;

// define a quantidade de alunos que serão lidos
#define QUANT_ALUNOS 2

int main(void) {
  int i; //controle de laço
  Aluno alunos[QUANT_ALUNOS]; //vetor de alunos

  setlocale(LC_ALL,""); // para acentos do português

  printf("LEITURA DOS ALUNOS:\n\n");

  for(i=0;i<QUANT_ALUNOS; i++){
    // vamos ler a matrícula do aluno
    printf("Matrícula do Aluno %d: ", (i + 1));
    scanf("%d", &alunos[i].matricula);
    fflush(stdin); // para o scanf não sair pulando o gets
    // agora o nome do aluno
    printf("Nome do aluno %d: ", (i + 1));
    gets(alunos[i].nome);
    // vamos ler a primeira nota
    printf("Nota 1 do Aluno %d: ", (i + 1));
    scanf("%f", &alunos[i].nota1);
    // vamos ler a segunda nota
    printf("Nota 2 do Aluno %d: ", (i + 1));
    scanf("%f", &alunos[i].nota2);
  }

  // agora vamos mostrar os alunos lidos, com suas notas
  // e suas médias aritméticas
  printf("\nDADOS DOS ALUNOS:\n");

  for(i=0; i< QUANT_ALUNOS; i++){
    printf("\nDADOS DO ALUNO %d: \n ", (i + 1));
    printf("Matrícula: %d\n", alunos[i].matricula);
    printf("Nome: %s\n", alunos[i].nome);
    printf("Nota 1:%.2f\n", alunos[i].nota1);
    printf("Nota 2:%.2f\n", alunos[i].nota2);
    printf("Média: %.2f\n", (alunos[i].nota1 + alunos[i].nota2) /2);
  }

  printf("\n\n");
  system("pause");
  return 0;
}