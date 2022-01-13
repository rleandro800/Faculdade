/*
* @file: ex6a11
* @date: 28/07/2021
* @author: Rodrigo Leandro Benedito
* @brief: Aula 11 exercício 6
* 6) Faça um programa que receba e armazene 20 números em
* um vetor. Em seguida exiba:
* Quantos números são iguais a 30;
* Quantos números são maior que a média;
* Quantos números são iguais à media;
*/

#include <stdio.h>
#include <stdlib.h>

int main () {
  //declarar variaveis
  int valores [20];
  int i;
  int j;
  int contadorI30 = 0;
  int contadorMMedia = 0;
  int contadorIMedia = 0;
  int media = 0;
  int soma = 0;
  //receber e armazenar 20 valores em um vetor1
    for(i = 0, j= 1; i < 20, j < 21; i++, j++){
      printf ("digite o valor %i:",j);
      scanf ("%i", &valores [i]);
    }

  //mostrar quantos numeros são iguais a 30
  for(i = 0; i < 20; i++){
    if(valores [i] == 30){
      contadorI30++;
    }
  }
  //calcular a media de todos os 20 números
  for(i = 0; i < 20; i++){
    soma = soma + valores [i];
  }
  media = soma / 20;
  //caucular quantos numeros são maiores que a média
  for(i = 0; i < 20; i++){
    if(valores [i] > media){
      contadorMMedia++;
    }
  }
  //calcular quantos números são iguais a média
  for(i = 0; i < 20; i++){
    if(valores [i] == media){
    contadorIMedia++;
    }
  }
  //exibir quantos numeros são iguais a 30, quantos são maiores que a média
  //e quantos são iguais a média
  printf("números iguais a 30:%i\n", contadorI30);
  printf("números maiores que a média:%i\n", contadorMMedia);
  printf("números iguais a média:%i\n", contadorIMedia);
}
