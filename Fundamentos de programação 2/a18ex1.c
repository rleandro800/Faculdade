/*
* @file: a18ex1
* @date: 20/10/2021
* @author: Rodrigo Leandro Benedito
* @brief: Aula 18 exercício 1
*
*/
#include <stdio.h>
#include <stdlib.h>

int CalculaFatorial(int valor, int* fatorial){
  if(valor == 1){
  }else{
    (*fatorial) = (*fatorial) * valor;

    printf("%d\n", *fatorial);
    CalculaFatorial(valor - 1, fatorial);
  }
  return *fatorial;
}

int main (){
  int valor;
  int fatorial;
  printf("digite um valor:");
  scanf("%D", &valor);
  if(valor == 1 || valor == 0){
    fatorial = 1;
  }else{
    fatorial = valor;
    valor--;
    CalculaFatorial(valor, &fatorial);
  }
  printf("Fatorial:%d",fatorial);

  return 0;
}
