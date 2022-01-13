/*
* @file: ex3a8
* @date: 14/07/2021
* @author: Rodrigo Leandro Benedito
* @brief: Aula 8 exercício 3
*
*/
#include <stdio.h>
#include <stdlib.h>

int main () {

  int valor = 1;
  float resultado = 1;
  while (valor <= 322){
    resultado = valor % 3;
    if (resultado == 0){
      printf (" %i\n", valor);
    }
      valor++;
  }

  return 0;
}
