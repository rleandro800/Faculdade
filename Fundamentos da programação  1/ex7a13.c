/*
* @file: ex7a13
* @date: 04/08/2021
* @author: Rodrigo Leandro Benedito
* @brief: Aula 13 exerc�cio 7
* 7) Escreva um programa que receba uma sigla de um estado da regi�o
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

  //pedir para o usu�rio digitar a sigla de um estado do Sul ou do Sudeste
  printf("digite a sigla de um estado do Sul ou do Sudeste:");
  fgets(sigla, 3, stdin);
  sigla[strcspn(sigla,"\n")] = '\0';
  setbuf(stdin,NULL);

  //exibir o nome completo do estado
  if(strcmp(rs,sigla)==0){
    printf("O nome completo do estado �: Rio Grande do Sul\n");
  }
  if(strcmp(pr,sigla)==0){
    printf("O nome completo do estado �: Paran�\n");
  }
  if(strcmp(sc,sigla)==0){
    printf("O nome completo do estado �: Santa Catarina\n");
  }
  if(strcmp(sp,sigla)==0){
    printf("O nome completo do estado �: S�o Paulo\n");
  }
  if(strcmp(rj,sigla)==0){
    printf("O nome completo do estado �: Rio de Janeiro\n");
  }
  if(strcmp(es,sigla)==0){
    printf("O nome completo do estado �: Espirito Santo\n");
  }
  if(strcmp(mg,sigla)==0){
    printf("O nome completo do estado �: Minas Gerais\n");
  }

  return 0;
}
