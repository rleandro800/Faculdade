/*
* @file: ex7a8
* @date: 14/07/2021
* @author: Rodrigo Leandro Benedito
* @brief: Aula 8 exercício 7
*
*/
#include <stdio.h>
#include <stdlib.h>

int main () {

  int i = 1;
  int resultado;

  scanf ("%i", &i);

  resultado = i * (i - 1);

  while (i > 2){
    i--;
    resultado = resultado * (i - 1);
  }

  printf ("%i\n ", resultado);

  return 0;

}
