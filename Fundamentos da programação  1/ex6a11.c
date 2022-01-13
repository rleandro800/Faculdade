/*
* @file: ex6a11
* @date: 28/07/2021
* @author: Rodrigo Leandro Benedito
* @brief: Aula 11 exerc�cio 6
* 6) Fa�a um programa que receba e armazene 20 n�meros em
* um vetor. Em seguida exiba:
* Quantos n�meros s�o iguais a 30;
* Quantos n�meros s�o maior que a m�dia;
* Quantos n�meros s�o iguais � media;
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

  //mostrar quantos numeros s�o iguais a 30
  for(i = 0; i < 20; i++){
    if(valores [i] == 30){
      contadorI30++;
    }
  }
  //calcular a media de todos os 20 n�meros
  for(i = 0; i < 20; i++){
    soma = soma + valores [i];
  }
  media = soma / 20;
  //caucular quantos numeros s�o maiores que a m�dia
  for(i = 0; i < 20; i++){
    if(valores [i] > media){
      contadorMMedia++;
    }
  }
  //calcular quantos n�meros s�o iguais a m�dia
  for(i = 0; i < 20; i++){
    if(valores [i] == media){
    contadorIMedia++;
    }
  }
  //exibir quantos numeros s�o iguais a 30, quantos s�o maiores que a m�dia
  //e quantos s�o iguais a m�dia
  printf("n�meros iguais a 30:%i\n", contadorI30);
  printf("n�meros maiores que a m�dia:%i\n", contadorMMedia);
  printf("n�meros iguais a m�dia:%i\n", contadorIMedia);
}
