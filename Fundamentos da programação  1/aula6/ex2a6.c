/*
* @file: ex2a6
* @date: 07/07/2021
* @author: Rodrigo Leandro Benedito
* @brief: Aula 6 exerc�cio 2
*2) Fa�a um programa que receba um n�mero e determine
* se ele � um n�mero par ou �mpar.
* Obs.: Utilize o operador % que retorna o resto da divis�o)
*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (){

  setlocale (LC_ALL, "");

  //declarar as vari�veis
  int valor1;
  float resto;
  //pedir para o usuario digitar um valor
  printf ("Digite um valor:");
  scanf ("%f", &valor1);
  //dividir o valor1 por 2
  resto = valor1 % 2;
  //descobrir se ele � par ou �mpar e exibir
  if(resto = 0) {
    printf("seu n�mero � par\n");
  }else{
    printf("Seu n�mero � �mpar\n");
  }

  return 0;

}
