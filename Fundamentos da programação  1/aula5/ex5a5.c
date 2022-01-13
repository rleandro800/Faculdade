/*
* @file: ex5a5.c
* @date: 05/07/2021
* @author: Rodrigo Leandro Benedito
* @brief: Aula 5 exercício 5
* 5) Sabendo que a função sqrt(valor), que está na biblioteca
* math.h retorna a raiz quadrada do valor, calcule a raiz
* quadrada de um número que o usuário digitar.
*/

  #include <stdio.h>
  #include <stdlib.h>
  #include <math.h>
  #include <locale.h>

  int main () {

    setlocale (LC_ALL, "");

  //Declarar as variáveis
  double valor1;
  double resultado;

  //Pedir para o usuário inserir um valor
  printf ("digite um valor:");
  scanf ("%lf", &valor1);

  //Calcular e exibir a raiz quadrada do valor inserido

  resultado = sqrt (valor1);
  printf ("A raiz desse valor é: %lf\n", resultado);

  return 0;


  }
