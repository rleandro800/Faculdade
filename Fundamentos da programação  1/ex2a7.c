/*
* @file: ex2a7
* @date: 11/07/2021
* @author: Rodrigo Leandro Benedito
* @brief: Aula 7 exerc�cio 2
* Crie uma calculadora usando a instru��o switch, que
* pergunte qual das opera��es b�sicas quer fazer (+, -, *
* e /), em seguida pe�a os dois n�meros e mostre o
* resultado da opera��o matem�tica entre eles.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {

  setlocale (LC_ALL,"");

  //declarar as vari�veis
  float valor1;
  float valor2;
  float resultado;
  int opcao;

  //criar um menu com 4 op��es sendo elas as opera��es basicas
  //pe�a para o usu�rio digitar 2 valores
  //realize a opera��o desejada com esses 2 valores
  printf ("Menu do programa:\n \n");
  printf ("1-Soma\n");
  printf ("2-Subtra��o\n");
  printf ("3-Divis�o\n");
  printf ("4-Multiplica��o\n");
  printf ("Digite a op��o desejada:");
  scanf ("%i", &opcao);

  switch (opcao){
    case 1:
      printf ("Digite um valor:\n");
      scanf ("%f", &valor1);
      printf ("Digite mais um valor:\n");
      scanf ("%f", &valor2);
      resultado = valor1 + valor2;
      printf ("O resultado �: %.2f\n", resultado);
      break;
    case 2:
      printf ("Digite um valor:\n");
      scanf ("%f", &valor1);
      printf ("Digite mais um valor:\n");
      scanf ("%f", &valor2);
      resultado = valor1 - valor2;
      printf ("O resultado �: %.2f\n", resultado);
      break;
    case 3:
      printf ("Digite um valor:\n");
      scanf ("%f", &valor1);
      printf ("Digite mais um valor:\n");
      scanf ("%f", &valor2);
      resultado = valor1 / valor2;
      printf ("O resultado �: %.2f\n", resultado);
      break;
    case 4:
      printf ("Digite um valor:\n");
      scanf ("%f", &valor1);
      printf ("Digite mais um valor:\n");
      scanf ("%f", &valor2);
      resultado = valor1 * valor2;
      printf ("O resultado �:%.2f\n", resultado);
      break;
  }

return 0;

}
