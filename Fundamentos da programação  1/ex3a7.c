/*
* @file: ex3a7
* @date: 11/07/2021
* @author: Rodrigo Leandro Benedito
* @brief: Aula 7 exerc�cio 3
*Altere o exerc�cio anterior para receber os 3 valores no
* mesmo scanf.
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
  char opcao;

  //criar um menu com 4 op��es sendo elas as opera��es basicas
  //pe�a para o usu�rio digitar 2 valores
  //realize a opera��o desejada com esses 2 valores
  printf ("Digite a opera��o desejada:\n");
  scanf ("%f%c%f", &valor1, &opcao, &valor2);

  switch (opcao){
    case '+':
      resultado = valor1 + valor2;
      printf ("O resultado �: %.2f\n", resultado);
      break;
    case '-':
      resultado = valor1 - valor2;
      printf ("O resultado �: %.2f\n", resultado);
      break;
    case '/':
      resultado = valor1 / valor2;
      printf ("O resultado �: %.2f\n", resultado);
      break;
    case '*':
      resultado = valor1 * valor2;
      printf ("O resultado �:%.2f\n", resultado);
      break;
  }

return 0;

}
