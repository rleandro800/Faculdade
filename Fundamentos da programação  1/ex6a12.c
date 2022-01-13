/*
* @file: ex1a12
* @date: 02/08/2021
* @author: Rodrigo Leandro Benedito
* @brief: Aula 12 exercício 1
*  Exercício 4) Faça um programa que multiplique por 5 a
* matriz A (preenchida a partir do teclado) para gerar a
* matriz C.
*/
#include <stdio.h>
#include <stdlib.h>

int main () {
  int l=0;
  int c=0;
  int A [2] [3];
  int D [3] [2];
  int AD [2] [2];

  //receber os valores da matriz A
  printf("matriz A:\n");
  for(l=0; l<2; l++){
    for(c=0; c<3; c++){
      printf("digite o valor[%i] [%i]:", l, c);
      scanf("%i",&A [l] [c]);
    }
  }
  //receber os valores da matriz D
  printf("matriz D:\n");
  for(l=0; l<3; l++){
    for(c=0; c<2; c++){
      printf("digite o valor[%i] [%i]:", l, c);
      scanf("%i",&D [l] [c]);
    }
  }
  //gerar a matriz AD
  AD [0] [0] = A [0] [0] * D [0] [0] + A [0] [1] * D [1] [0] + A [0] [2] * D [2] [0];
  AD [0] [1] = A [0] [0] * D [0] [1] + A [0] [1] * D [1] [1] + A [0] [2] * D [2] [1];
  AD [1] [0] = A [1] [0] * D [0] [0] + A [1] [1] * D [1] [0] + A [1] [2] * D [2] [0];
  AD [1] [1] = A [1] [0] * D [0] [1] + A [1] [1] * D [1] [1] + A [1] [2] * D [2] [1];

  //exibir a matriz AD
  printf("Matriz AD:")
  for(l=0;l<2;l++){
    for(c=0;c<2;c++){
      printf("%i ", AD [l] [c]);

    }
    printf("\n");
  }

  return 0;
}
