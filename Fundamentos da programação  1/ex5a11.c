/*
* @file: ex4a11
* @date: 28/07/2021
* @author: Rodrigo Leandro Benedito
* @brief: Aula 11 exercício 4
* 5)Dado dois vetores, A (4 elementos) e B (5 elementos), faça
* um programa em C que imprima todos os elementos comuns
* aos dois vetores.
*/
#include <stdio.h>
#include <stdlib.h>

int main () {

  //declarar as variáveis
  int A [4];
  int B [5];
  int i;
  int j;

  //receber quatro elementos de um conjunto
  for(i = 0, j = 1; i < 4, j < 5; i++, j++){
    printf("Digite o valor %i do conjunto A:",j);
    scanf("%i", &A [i]);
  }

  for(i = 0, j = 1; i < 5, j < 6; i++, j++){
    printf("Digite o valor %i do conjunto B:",j);
    scanf("%i", &B [i]);
  }

  for(i = 0; i < 4; i++){
    for( j = 0; j < 5; j++){
      if(A [i] == B [j] ){
        printf ("%i\n%i\n", A [i], B [j]);
      }

    }
  }

  //receber cinco elementos de outro conjunto
  //descobrir elementos em comum entre esses 2 conjuntos
  // mostrar os valores em comum

  return 0;
}
