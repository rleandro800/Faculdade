/*
* @file: ex6a13
* @date: 04/08/2021
* @author: Rodrigo Leandro Benedito
* @brief: Aula 13 exercício 6
* 6) Faça um programa que receba um nome e um sobrenome. Ele deve
* construir uma nova string no formato americano (Sobrenome, Nome)
* Exemplo: Silva, José
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () {
  char nome [31];
  char sobrenome [31];
  char nomeA [31];
  char v [3]= ", ";
  //pedir para o usuario digitar nome e sobrenome
  printf("Digite um nome:");
  fgets(nome, 30,stdin);
  nome [strcspn(nome,"\n")]= '\0';
  setbuf (stdin, NULL);
  printf("Digite um Sobrenome:");
  fgets(sobrenome, 30,stdin);
  sobrenome [strcspn(sobrenome,"\n")]= '\0';
  setbuf (stdin, NULL);

  //tranformar em fomato americano
  strcpy(nomeA,sobrenome);
  strcat(nomeA, v);
  strcat(nomeA, nome);

  printf("%s\n", nomeA);

  return 0;

}
