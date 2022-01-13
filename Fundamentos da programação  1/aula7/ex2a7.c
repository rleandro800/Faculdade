/*
* @file: ex2a7
* @date: 11/07/2021
* @author: Rodrigo Leandro Benedito
* @brief: Aula 7 exercício 2
* Crie uma calculadora usando a instrução switch, que
* pergunte qual das operações básicas quer fazer (+, -, *
* e /), em seguida peça os dois números e mostre o
* resultado da operação matemática entre eles.
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
  int opcao;

  //criar um menu com 4 opções sendo elas as operações basicas
  //peça para o usuário digitar 2 valores
  //realize a operação desejada com esses 2 valores
  printf ("Menu do programa:\n \n");
  printf ("1-Soma\n");
  printf ("2-Subtração\n");
  printf ("3-Divisão\n");
  printf ("4-Multiplicação\n");
  printf ("Digite a opção desejada:");
  scanf ("%i", &opcao);

  switch (opcao){
    case 1:
      printf ("Digite um valor:\n");
      scanf ("%f", &valor1);
      printf ("Digite mais um valor:\n");
      scanf ("%f", &valor2);
      resultado = valor1 + valor2;
      printf ("O resultado é: %.2f\n", resultado);
      break;
    case 2:
      printf ("Digite um valor:\n");
      scanf ("%f", &valor1);
      printf ("Digite mais um valor:\n");
      scanf ("%f", &valor2);
      resultado = valor1 - valor2;
      printf ("O resultado é: %.2f\n", resultado);
      break;
    case 3:
      printf ("Digite um valor:\n");
      scanf ("%f", &valor1);
      printf ("Digite mais um valor:\n");
      scanf ("%f", &valor2);
      resultado = valor1 / valor2;
      printf ("O resultado é: %.2f\n", resultado);
      break;
    case 4:
      printf ("Digite um valor:\n");
      scanf ("%f", &valor1);
      printf ("Digite mais um valor:\n");
      scanf ("%f", &valor2);
      resultado = valor1 * valor2;
      printf ("O resultado é:%.2f\n", resultado);
      break;
  }

return 0;

}
