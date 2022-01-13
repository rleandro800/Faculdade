/*
* @file: a21ex1
* @date: 18/08/2021
* @author: Rodrigo Leandro Benedito
* @brief: Aula 21 exercício 1
* 1) Escreva um programa que leia do usuário o nome de um arquivo
* texto. Em seguida, mostre na tela quantas linhas esse arquivo possui.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
  char nome [20];
  int tamanho = -1;

  //Receber o nome do arquivo do usuario
  printf("digite o nome de um arquivo:");
  fgets(nome,19,stdin);
  nome[strcspn(nome,"\n")]='\0';
  setbuf(stdin,NULL);

  FILE *arq = fopen("arq.txt", "r");

  if(arq == NULL){
    printf("Erro ao abrir o arquivo!\n");
    exit(1);
  }

  //Calcular e exibir quantas linhas tem o arquivo
  while((fgetc(arq)) !=EOF) {
    tamanho++;
  }
  printf("Tamanho:%i\n",tamanho);
}
