/*
* @file: ex6a10
* @date: 25/07/2021
* @author: Rodrigo Leandro Benedito
* @brief: Aula 10 exerc�cio 6
*6) Fa�a um programa que receba 10 n�meros e calcule o
* quadrado desse n�mero (um de cada vez).
*/
# include <stdio.h>
# include <stdlib.h>

int main () {
  //declarar as vari�veis
  int numero;
  int quadrado;
  //calcular o quadrado de 10 numeros digitados pelo usu�rio e exibir na tela
  for(int i = 0; i < 10; i++){
    printf ("Digite um n�mero:");
    scanf ("%i", &numero);
    quadrado = numero * numero;
    printf("O quadrado desse n�mero �:%i\n", quadrado);
  }//for

  return 0;
}//main
