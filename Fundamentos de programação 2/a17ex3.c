/*
* @file: ex3a17
* @date: 14/10/2021
* @author: Rodrigo Leandro Benedito
* @brief: Aula 17 exercício 3

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
  char nome [30];
  char genero [20];
  int integrantes;
  int ranking;
}Banda;

void PreencherStruct(Banda bandas[]){
  for (size_t i = 0; i < 5; i++) {
    printf("Digite o nome da Banda %i:",i+1);
    fgets(bandas[i].nome,29,stdin);
    setbuf(stdin,NULL);
    //bandas[i].nome[strcspn(bandas[i].nome"\n")] = '\0';
    printf("Digite o genero da Banda %i:",i+1);
    fgets(bandas[i].genero,19,stdin);
    setbuf(stdin,NULL);
    //bandas[i].genero[strcspn(bandas[i].genero"\n")] = '\0';
    printf("Digite o número de integrantes da Banda %i:",i+1);
    scanf("%d",&bandas[i].integrantes);
    setbuf(stdin,NULL);
    printf("Digite o nume do Ranking de 1 a 5 da Banda %i:",i+1);
    scanf("%d",&bandas[i].ranking);
    setbuf(stdin,NULL);
  }//for
}//PreecherStruct

void ExibeBanda( Banda bandas []){
  int opcao;
  printf("Digite o numero da banda:");
  scanf("%d", &opcao);
  for (size_t i = 0; i < 5 ; i++) {
    if(opcao == bandas[i].ranking){
      printf("Nome:%s\n", bandas[i].nome);
      printf("Genero:%s\n", bandas[i].genero);
      printf("Integrantes:%d\n", bandas[i].integrantes);
    }//if
  }//for
}//ExibeBanda


int main() {
  Banda bandas [5];
  PreencherStruct(bandas);
  ExibeBanda(bandas);
}
