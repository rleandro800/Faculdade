/*
* @file: a16ex1
* @date: 13/10/2021
* @author: Rodrigo leandro Benedito
* @brief: Aula 16 exercicio 1
*/
#include <stdio.h>
#include <stdlib.h>

float valorMaior (float valor1, float valor2, float valor3){
  float valorm;
  valorm = valor1;
  if(valor2 > valor1 && valor2 > valor3){
    valorm = valor2;
  }
  if (valor3 > valor2 && valor3 > valor1){
    valorm = valor3;
  }
  return valorm;
}//valorMaior

int main(){

  float Valor1, Valor2, Valor3;

  printf("digite o valor 1:\n");
  scanf("%f", &Valor1);
  printf("digite o valor 2:\n");
  scanf("%f", &Valor2);
  printf("digite o valor 3:\n");
  scanf("%f", &Valor3);

  float ValorM = valorMaior(Valor1, Valor2, Valor3);

  printf ("O valor maior: %.2f\n", ValorM);

  return 0;
}
