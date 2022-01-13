/*
* @file: ex3a7
* @date: 11/07/2021
* @author: Rodrigo Leandro Benedito
* @brief: Aula 7 exercício 3
*Altere o exercício anterior para receber os 3 valores no
* mesmo scanf.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {

  setlocale (LC_ALL,"");

  //declarar as variáveis
  float valor1;
  float valor2;
  float resultado;
  char opcao;

  //criar um menu com 4 opções sendo elas as operações basicas
  //peça para o usuário digitar 2 valores
  //realize a operação desejada com esses 2 valores
  printf ("Digite a operação desejada:\n");
  scanf ("%f%c%f", &valor1, &opcao, &valor2);

  switch (opcao){
    case '+':
      resultado = valor1 + valor2;
      printf ("O resultado é: %.2f\n", resultado);
      break;
    case '-':
      resultado = valor1 - valor2;
      printf ("O resultado é: %.2f\n", resultado);
      break;
    case '/':
      resultado = valor1 / valor2;
      printf ("O resultado é: %.2f\n", resultado);
      break;
    case '*':
      resultado = valor1 * valor2;
      printf ("O resultado é:%.2f\n", resultado);
      break;
  }

return 0;

}
