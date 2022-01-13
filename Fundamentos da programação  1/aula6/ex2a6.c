/*
* @file: ex2a6
* @date: 07/07/2021
* @author: Rodrigo Leandro Benedito
* @brief: Aula 6 exercício 2
*2) Faça um programa que receba um número e determine
* se ele é um número par ou ímpar.
* Obs.: Utilize o operador % que retorna o resto da divisão)
*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (){

  setlocale (LC_ALL, "");

  //declarar as variáveis
  int valor1;
  float resto;
  //pedir para o usuario digitar um valor
  printf ("Digite um valor:");
  scanf ("%f", &valor1);
  //dividir o valor1 por 2
  resto = valor1 % 2;
  //descobrir se ele é par ou ímpar e exibir
  if(resto = 0) {
    printf("seu número é par\n");
  }else{
    printf("Seu número é ímpar\n");
  }

  return 0;

}
