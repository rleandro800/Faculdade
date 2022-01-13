/*
* @file: ex1a12
* @date: 02/08/2021
* @author: Rodrigo Leandro Benedito
* @brief: Aula 12 exercício 1
*1) Crie uma matriz identidade com dimensões 5 x 5;
*/
#include <stdio.h>
#include <stdlib.h>

int main () {
  int l, c;
  int matriz [5] [5];
  //colocando os valores na matriz identidade
  for(l=0;l<5;l++){
    for(c=0;c<5;c++){
      if(l==c){
        matriz [l] [c] = 1;
      }else{
        matriz [l] [c] = 0;
      }
    }
  }
  //eiximindo a matriz identidade
  for(l=0;l<5;l++){
    for(c=0;c<5;c++){
      printf("%i ", matriz [l] [c]);


    }
    printf("\n");
  }
  return 0;
}
