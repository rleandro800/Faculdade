/*
* @file: ex9a10
* @date: 26/07/2021
* @author: Rodrigo Leandro Benedito
* @brief: Aula 10 exercício 9
* Desenvolva um programa que receba um numero tamanho e exiba um quadrado de tamanho tamanho utilizando o carácter  #

*/
# include <stdio.h>
# include <stdlib.h>

int main (){
  //declarar as vaiáveis
  int valor;
  int i;
  int g;
  //pedir para o usuário digirar um valor
  printf ("Digite um valor:");
  scanf ("%i", &valor);
  //tranformar esse valor na aultura e largura de um quadrado
  for (i = 0; i < valor; i++){
    printf ("\n");
    for (g = 0; g < valor; g++){
      printf("# ");
    }//for interno
  }//for
  printf("\n");
  return 0;
}//main
