/*
* @file: l2ex3
* @date: 17/08/2021
* @author: Rodrigo Leandro Benedito
* @brief: lista 2 exercício 3
* 3) Faça um programa que solicite o tamanho de um quadrado e mostre a borda
* de um quadrado utilizando o caracter #.
* Exemplo:
* Digite o tamanho desejado: 10

#	#	#	#	#	#	#	#	#	#
#									#
#									#
#									#
#									#
#									#
#									#
#									#
#									#
#	#	#	#	#	#	#	#	#	#
*/

#include <stdio.h>
#include <stdlib.h>

int main (){
  //declarar as variaveis
  int tamanho;
  //pedir para o usuario digitar o tamanho do quadrado
  printf("digite o tamanho do quadrado:");
  scanf("%i", &tamanho);
  //fazer o quadrado
  for(int i=0; i<tamanho; i++){
    printf("#");
  }
  printf("\n");
  for(int i=0; i<tamanho-2; i++){
  printf("#");
    for(int i=0; i<tamanho-2; i++){
      printf (" ");
    }
  printf("#\n");
  }
  for(int i=0; i<tamanho; i++){
    printf("#");
  }

  return 0;
}
