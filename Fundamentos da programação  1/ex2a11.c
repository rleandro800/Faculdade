/*
* @file: ex2a11
* @date: 28/07/2021
* @author: Rodrigo Leandro Benedito
* @brief: Aula 11 exercício 2
* 2) Crie um algoritmo que receba 10 números e os armazene em
* um vetor A. Em seguida, gere o vetor B onde cada elemento é o
* quadrado do valor da mesma posição no vetor A
*/

# include <stdlib.h>

int main () {

  //declarar as variáveis
  int A [10];
  int B [10];
  int i;
  int j;

  //receber 10 valores e tranformar no seu quadrado
  for (i = 0, j = 1; i < 10, j < 11; i++, j++){
    printf ("digite o valor %i:", j);
    scanf ("%i", &A [i]);
    B [i] = A [i] * A [i];
  }
  //mostrar os quadrados dos números digitados
  for (i = 0, j = 1; i < 10, j < 11; i++, j++ ){
    printf("valor %i:%i\n", j, B [i]);
  }

  return 0;
  
}// main
