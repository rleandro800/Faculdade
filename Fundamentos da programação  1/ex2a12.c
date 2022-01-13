/*
* @file: ex2a12
* @date: 02/08/2021
* @author: Rodrigo Leandro Benedito
* @brief: Aula 12 exercício 2
* 2) Faça um algoritmo que leia uma matriz 3 por 3 (3x3) e
* retorna a soma dos elementos da sua diagonal principal e
* da sua diagonal secundária;
*/
#include <stdio.h>
#include <stdlib.h>

int main (){
  int l, c;
  int matriz [3] [3];
  int somaP = 0;
  int somaS = 0;
  //rebeber os valores de uma matriz 3X3
  for(l=0;l<3;l++){
    for(c=0;c<3;c++){
      printf("digite o valor[%i] [%i]:", l, c);
      scanf("%i",&matriz [l] [c]);
    }
  }
  //calcular a soma da diagonal principal com a diagonal secundaria
  for(l=0; l<5 ; l++){
    for(c=0; c<5 ; c++){
      if(l==0 && c==0 || l==1 && c==1 || l==2 && c==2 ){
        somaP= somaP + matriz [l] [c];
      }
      if(l==0 && c==2 || l==1 && c==1 || l==2 && c==0){
        somaS= somaS + matriz [l] [c];
      }
    }
  }
  //exibir na tela o total de cada diagonal
  printf("Soma da diagonal principal:%i\n", somaP);
  printf("Soma da diagonal secundaria: %i\n", somaS);

  return 0;
}
