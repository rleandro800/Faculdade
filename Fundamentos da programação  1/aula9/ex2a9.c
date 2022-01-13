/*
* @file: ex2a9
* @date: 16/07/2021
* @author: Rodrigo Leandro Benedito
* @brief: Aula 9 exerc�cio 2
*2) Fa�a um programa que receba valores enquanto eles estiverem no
* intervalo de 500 a 1000. Ao receber um valor fora da faixa, o
* programa dever� parar de solicitar valores, exibir quantos valores
* v�lidos foram digitados e finalizar
*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {

  setlocale (LC_ALL,"");

  //declarar variaveis
  int valor;
  int i = -1;
  do{
    //pedir para o usuario digitar um numero de 500 a 1000
    //se o valor for fora desse intervalo mostrar o numero de valores digitados
    //e finalize o programa
    printf ("Digite um valor de 500 a 1000:\n");
    scanf ("%i", &valor);
    i++;
  }while (valor >= 500 && valor <= 1000);

  printf ("n�mero de valores v�lidos digitados:\n%i\n", i);

  return 0;

}
