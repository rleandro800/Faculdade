/*
* @file: ex4a12
* @date: 02/08/2021
* @author: Rodrigo Leandro Benedito
* @brief: Aula 12 exercício 4
*  Exercício 4) Faça um programa que multiplique por 5 a
* matriz A (preenchida a partir do teclado) para gerar a
* matriz C.
*/
#include <stdio.h>
#include <stdlib.h>

int main() {

  int l, c;
  int matrizA [2] [3];
  int matrizC [2] [3];

  //receber os valores da matriz A
  printf("Matriz A:")
  for(l=0; l<2; l++){
    for(c=0; c<3; c++){
      printf("digite o valor[%i] [%i]:", l, c);
      scanf("%i",&matrizA [l] [c]);
    }
  }
  //Multiplicando todos os valores da matriz A por 5
  for(l=0;l<2;l++){
    for(c=0;c<3;c++){
      matrizC [l] [c] = matrizA [l] [c] * 5;
    }
  }

  //exibir a matriz C
  printf("Matriz C:")
  for(l=0;l<2;l++){
    for(c=0;c<3;c++){
      printf("%i", matrizC [l] [c]);
    }
    printf("\n");
  }

  return 0;

}
