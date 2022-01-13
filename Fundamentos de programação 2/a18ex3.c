/*
* @file: a18ex3
* @date: 20/10/2021
* @author: Rodrigo Leandro Benedito
* @brief: Aula 18 exercício 3
*
*/
#include <stdio.h>
#include <stdlib.h>

void CalculaPotencia(int* x, int* y, int* resultado){

  if( *y == 1){
  }else{
    (*resultado) = (*resultado) * (*x);
    //printf("Resultado: %d\n", *resultado);
    (*y)--;
    CalculaPotencia(x, y, resultado);
  }

  return ;
}

int main(){
  int x;
  int y;
  int resultado;
  printf("digite um numero:");
  scanf("%d",&x);
  printf("digite o valor da potecia:");
  scanf("%d",&y);
  resultado = x;
  CalculaPotencia(&x, &y, &resultado);
  printf("Resultado: %d\n", resultado);

}
