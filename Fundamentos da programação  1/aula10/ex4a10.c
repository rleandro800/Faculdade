/*
* @file: ex10a4
* @date: 22/07/2021
* @author: Rodrigo Leandro Benedito
* @brief: Aula 10 exercício 4
* 4) Crie um algoritmo que exiba todos os números pares
* entre 240 e 730 inclusive.
*/
# include <stdio.h>
# include <stdlib.h>

int main () {
  //exibir numeros pares de 240 a 730.
  for(int i = 240; i <= 730; i +=2){
    printf ("i:%i\n", i);
  }//for

  return 0;

}//main
