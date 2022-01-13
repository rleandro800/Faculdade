/*
* @file: ex5a12
* @date: 02/08/2021
* @author: Rodrigo Leandro Benedito
* @brief: Aula 12 exercício 5
* Exercício 5) Faça um programa que some as matrizes A e B,
* gerando C
*/
#include <stdio.h>
#include <stdlib.h>

int main (){

  int l, c;
  int matrizA [2] [3];
  int matrizB [2] [3];
  int matrizC [2] [3];

  //receber os valores da matriz A
  printf("Matriz A:\n");

  for(l=0; l<2; l++){
    for(c=0; c<3; c++){
      printf("digite o valor[%i] [%i]:", l, c);
      scanf("%i",&matrizA [l] [c]);
    }
  }

  //receber os valores da matriz B
  printf("Matriz B:\n");

  for(l=0; l<2; l++){
    for(c=0; c<3; c++){
      printf("digite o valor[%i] [%i]:", l, c);
      scanf("%i",&matrizB [l] [c]);
    }
  }
  //gerar a matriz C
  for(l=0; l<2; l++){
    for(c=0; c<3; c++){
      matrizC [l] [c] = matrizA [l] [c] + matrizB [l] [c];
    }
  }
  //exibir a matriz C
  printf("Matriz C:\n");

  for(l=0; l<2; l++){
    for(c=0; c<3; c++){
      printf("%i ", matrizC [l] [c]);
    }
    printf("\n");
  }
}
