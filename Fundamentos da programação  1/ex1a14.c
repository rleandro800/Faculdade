/*
* @file: ex1a14
* @date: 12/08/2021
* @author: Rodrigo Leandro Benedito
* @brief: Aula 14 exercício 1
* 1) Faça um algoritmo que implemente uma função que receba 3 números
* inteiros e retorne o maior valor;
*/


#include <stdio.h>
#include <stdlib.h>


int comparaValor (int num1, int num2, int num3){

  int numeroM;

  if(num1 >= num2 && num1 >= num3){
    numeroM = num1;
  }
  if(num2 >= num3 && num2 >= num1){
    numeroM = num2;
  }
  if(num3 >= num1 && num3 >= num2){
    numeroM = num3;
  }
  return numeroM;

}

int main (){
  int numero [3];
  int resultado;
  for(int i=0;i<3;i++){
    printf("digite um numero:\n");
    scanf("%i", &numero [i]);
  }
  resultado = comparaValor(numero [0], numero [1], numero [2]);

  if(resultado < 0){
    resultado = -1;
  }
  printf("O maior valor é: %i", resultado);

  return 0;

}
