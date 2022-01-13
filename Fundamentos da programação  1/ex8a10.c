/*
* @file: ex8a10
* @date: 26/07/2021
* @author: Rodrigo Leandro Benedito
* @brief: Aula 10 exercício 8
* Utilizando a estrutura do laço for aninhado, crie um programa que exiba a tabuada de todos os números  de 1 a 10 no seguinte formato:
*
* Tabuada do 1:
* 1 x 1 =  1
* 1 x 2 =  2
* 1 x 3 =  3
* ...
*
* Tabuada do 5:
* 5 X 1 =  5
* 5 X 2 = 10
* 5 X 3 = 15
* ...
*/
# include <stdio.h>
# include <stdlib.h>

int main () {
  //declaras as variáveis
  int i;
  int j;
  int resultado;
  //exibir as tabuadas de 1 a 10
  for(i = 1; i<=10; i++){
    printf("Tabuada do %i:\n\n", i);
    for(j = 1; j <= 10; j++){
      resultado = i * j;
      printf("%i X %i = %i\n", i, j,resultado);
    }//for interno
    printf("\n");
  }//for
  return 0;
}//main
