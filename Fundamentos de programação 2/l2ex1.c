/*
* @file: l2ex1
* @date: 24/11/2021
* @author: Rodrigo Leandro Benedito
* @brief: Lista 2 exercício 1
* 1) Crie uma função que receba uma string e retorne
* o ponteiro para essa string invertida.
*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


char CriaPonteiro(){
  char palavra[8];
  char palavraInv[8];
  char *ptr;
  int j = 0;
  printf("Digite uma Palavra:");
  fgets(palavra,8,stdin);

  for(int i = 8; i > 0; i--){
    //if(palavra[i] == '\0'){
    //}else{
      palavraInv[j] = palavra[i];
      j++;

    //}
  }
    printf("palavra:%s\n",palavraInv);
    *ptr = palavraInv[8];
    return *ptr;
  }


int main(){
  char *ptrInv;
  *ptrInv = CriaPonteiro();
  printf("Ponteiro :%p\n", ptrInv);
}
