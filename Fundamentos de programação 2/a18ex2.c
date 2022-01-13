/*
* @file: a18ex2
* @date: 20/10/2021
* @author: Rodrigo Leandro Benedito
* @brief: Aula 18 exercício 2
*
*/
#include <stdio.h>
#include <stdlib.h>

void MultiplicaSoma(int* x, int* y, int* resultado){

  if(*y == 0){
  }else{
    (*resultado) = (*resultado) + (*x);
    //printf("Resultado:%d\n",*resultado);
    (*y)--;
    MultiplicaSoma(x, y, resultado);
  }
  return;
}

int main(){
    int x;
    int y;
    int resultado = 0;
  printf("digite dois numeros");
  scanf("%d",&x);
  setbuf(stdin,NULL);
  scanf("%d",&y);
  MultiplicaSoma(&x, &y, &resultado);
  printf("Resultado:%d\n",resultado);
}
