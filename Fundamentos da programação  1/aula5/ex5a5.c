/*
* @file: ex5a5.c
* @date: 05/07/2021
* @author: Rodrigo Leandro Benedito
* @brief: Aula 5 exerc�cio 5
* 5) Sabendo que a fun��o sqrt(valor), que est� na biblioteca
* math.h retorna a raiz quadrada do valor, calcule a raiz
* quadrada de um n�mero que o usu�rio digitar.
*/

  #include <stdio.h>
  #include <stdlib.h>
  #include <math.h>
  #include <locale.h>

  int main () {

    setlocale (LC_ALL, "");

  //Declarar as vari�veis
  double valor1;
  double resultado;

  //Pedir para o usu�rio inserir um valor
  printf ("digite um valor:");
  scanf ("%lf", &valor1);

  //Calcular e exibir a raiz quadrada do valor inserido

  resultado = sqrt (valor1);
  printf ("A raiz desse valor �: %lf\n", resultado);

  return 0;


  }
