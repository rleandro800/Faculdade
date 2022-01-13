/*
* @file: ex4a13
* @date: 04/08/2021
* @author: Rodrigo Leandro Benedito
* @brief: Aula 13 exercício 4
* 4) Faça um programa que receba um nome, ele deve perguntar
* novamente caso o nome tenha tamanho inferior a 5 caracteres. Ao receber
* um nome com 5 caracteres ou mais o programa exibe o nome e finaliza.
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () {
  char nome [31];
  //receber um nome
  //conferir se ele é maior que 5 caracteres
  do{
    printf("Digite um nome:");
    fgets(nome, 30, stdin);
    setbuf(stdin,NULL);
  }while(strlen(nome) <= 5);

  return 0;
}
