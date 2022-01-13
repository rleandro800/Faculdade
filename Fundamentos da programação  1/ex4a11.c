/*
* @file: ex4a11
* @date: 28/07/2021
* @author: Rodrigo Leandro Benedito
* @brief: Aula 11 exercício 4
* 4) Crie e inicialize um vetor de inteiros de tamanho 8. Faça a
* soma dos seus elementos, e apresente o resultado.
*/

#include <stdio.h>
#include <stdlib.h>

int main () {

  //declarar variáveis
  int i;
  int j;
  int valores [8];
  int soma;

  //receber 120 valores e armazenar
  for (i = 0, j = 1; i < 8, j < 9; i++, j++){
    printf ("Digite o valor %i:", j);
    scanf ("%i", &valores [i]);
  }

  //calcular a soma dos 8 valores recebidos
  for (i = 0; i < 8; i++){
    soma = soma + valores [i];
  }

  //exibir na tela
  printf("A soma desses valores é:%i", soma);

  return 0;

}//main
