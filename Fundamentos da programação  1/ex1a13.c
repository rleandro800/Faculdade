/*
* @file: ex1a13
* @date: 03/08/2021
* @author: Rodrigo Leandro Benedito
* @brief: Aula 13 exercício 1
* 1) Crie um programa para armazenar 10 nomes em um vetor
* e imprimir uma lista numerada
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () {

  char nomes [10] [31];
  int  i;

  //receber 10 nomes
  for(i=0;i<10;i++){
    printf("digite o nome %i:", i+1);
    fgets(nomes [i], 30, stdin);
    setbuf(stdin, NULL);
  }

  //exibir a lista dos 10 nomes
  for(i=0;i<10;i++){
    printf("Nome %i: %s",i+1, nomes [i]);
  }

  return 0;
}
