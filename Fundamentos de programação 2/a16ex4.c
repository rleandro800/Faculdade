/*
* @file: a16ex4
* @date: 13/10/2021
* @author: Rodrigo leandro Benedito
* @brief: Aula 16 exercicio 4
*/
#include <stdio.h>
#include <stdlib.h>

char DefineConceito(float nota){
  char conceito;
  if(nota == 9 || nota == 10){
    conceito = 'A';
  }
  if(nota >= 7 && nota < 9){
    conceito = 'B';
  }
  if(nota >=5 && nota < 7){
    conceito = 'C';
  }
  if(nota > 0 && nota < 5){
    conceito = 'D';
  }
  return conceito;
}

int main(){
  float Nota;
  printf("digite sua nota:");
  scanf("%f", &Nota);
  char Conceito = DefineConceito(Nota);
  printf("Conceito:%c ", Conceito);
}
