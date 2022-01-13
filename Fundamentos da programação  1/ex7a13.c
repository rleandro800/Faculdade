/*
* @file: ex7a13
* @date: 04/08/2021
* @author: Rodrigo Leandro Benedito
* @brief: Aula 13 exercício 7
* 7) Escreva um programa que receba uma sigla de um estado da região
* Sul ou Sudeste e exiba o nome completo do estado correspondente
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (){

  char pr [20] = "PR";
  char rs [20] = "RS";
  char sc [20] = "SC";
  char sp [20] = "SP";
  char rj [20] = "RJ";
  char es [20] = "ES";
  char mg [20] = "MG";
  char sigla [4];

  //pedir para o usuário digitar a sigla de um estado do Sul ou do Sudeste
  printf("digite a sigla de um estado do Sul ou do Sudeste:");
  fgets(sigla, 3, stdin);
  sigla[strcspn(sigla,"\n")] = '\0';
  setbuf(stdin,NULL);

  //exibir o nome completo do estado
  if(strcmp(rs,sigla)==0){
    printf("O nome completo do estado é: Rio Grande do Sul\n");
  }
  if(strcmp(pr,sigla)==0){
    printf("O nome completo do estado é: Paraná\n");
  }
  if(strcmp(sc,sigla)==0){
    printf("O nome completo do estado é: Santa Catarina\n");
  }
  if(strcmp(sp,sigla)==0){
    printf("O nome completo do estado é: São Paulo\n");
  }
  if(strcmp(rj,sigla)==0){
    printf("O nome completo do estado é: Rio de Janeiro\n");
  }
  if(strcmp(es,sigla)==0){
    printf("O nome completo do estado é: Espirito Santo\n");
  }
  if(strcmp(mg,sigla)==0){
    printf("O nome completo do estado é: Minas Gerais\n");
  }

  return 0;
}
