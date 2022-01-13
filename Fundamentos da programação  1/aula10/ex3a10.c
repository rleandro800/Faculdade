/*
* @file: ex10a3
* @date: 22/07/2021
* @author: Rodrigo Leandro Benedito
* @brief: Aula 10 exercício 3
* 3) Crie um algoritmo que exiba todos os números múltiplos
* de 5 no intervalo de 1 a 50
*/
#include <stdio.h>
#include <stdlib.h>

int main () {
  //exibor numeros multiplos de 5 de 1 a 50
  for (int i = 0; i <= 50; i += 5){
    printf ("%i\n", i);
  }//for

  return 0;

}//main
