/*
* @file: ex3a12
* @date: 02/08/2021
* @author: Rodrigo Leandro Benedito
* @brief: Aula 12 exercício 3
*  3) Construa um programa que leia uma matriz de tamanho
* 5 x 5 e escreva:
*  O valor e a localização (linha, coluna) do maior valor encontrado
* na matriz.
*/
#include <stdio.h>
#include <stdlib.h>

int main () {
  int l, c;
  int matriz [5] [5];
  int numeroM;
  int linha;
  int coluna;

  //recebendo os valores da matriz e verificando qual o maior valor e a sua localização
  printf("digite os números da matriz 5x5:\n");
  for(l=0;l<5;l++){
    for(c=0;c<5;c++){
      printf("digite o valor[%i] [%i]:", l, c);
      scanf("%i",&matriz [l] [c]);
      if(matriz [l] [c] > numeroM){
        numeroM = matriz [l] [c];
        linha = l;
        coluna = c;
      }
    }
  }
  //exibindo o maior valor e sua localização
  printf("Linha:%i\n", linha);
  printf("Coluna:%i\n", coluna);
  printf("Maior Numero:%i\n", numeroM);

  return 0;
}
