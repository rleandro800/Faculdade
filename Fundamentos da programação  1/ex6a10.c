/*
* @file: ex6a10
* @date: 25/07/2021
* @author: Rodrigo Leandro Benedito
* @brief: Aula 10 exercício 6
*6) Faça um programa que receba 10 números e calcule o
* quadrado desse número (um de cada vez).
*/
# include <stdio.h>
# include <stdlib.h>

int main () {
  //declarar as variáveis
  int numero;
  int quadrado;
  //calcular o quadrado de 10 numeros digitados pelo usuário e exibir na tela
  for(int i = 0; i < 10; i++){
    printf ("Digite um número:");
    scanf ("%i", &numero);
    quadrado = numero * numero;
    printf("O quadrado desse número é:%i\n", quadrado);
  }//for

  return 0;
}//main
