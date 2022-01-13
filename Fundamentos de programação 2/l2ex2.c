/*
* @file: l2ex2
* @date: 05/07/2021
* @author: Rodrigo Leandro Benedito
* @brief: Lista 2 exercício 2
* 2) Escreva uma função que receba como parâmetro uma matriz A contendo
* N linhas e N colunas. A função deve retornar o ponteiro para um vetor B de
* tamanho N alocado dinamicamente, em que cada posição de B é a soma dos números
* daquela coluna da matriz.
*/
#include <stdio.h>
#include <stdlib.h>
#define N 3

int main(){
  //criar uma matriz de tamanho N e passar pro parametro para a função
  int A [N] [N];
  int i, j;
  //receber os valores da matriz
  for(i = 0; i < N; i++){
    for(j = 0; j < N; j++){
      printf("Digite o valor %i,%i:",i,j);
      scanf("%d",&A [i] [j]);
    }//ifI
  }//ifJ

  //criar um vetor de tamanho N
  int B [N];
  for(i = 0; i < N; i++){
    B[i] = 0;
  }
  for(i=0;i < N; i++){
    for(j= 0; j<N; j++){
      B [i] = B [i] + A [i] [j];
    }
  }
  for(i=0;i < N; i++){
    printf("%i\n",B [i]);
  }

}//main
//criar função

//cada casa do vetor de tanhanho N deve ser preenchida com a soma da fileira
