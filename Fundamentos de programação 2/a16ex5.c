/*
* @file: a16ex5
* @date: 13/10/2021
* @author: Rodrigo leandro Benedito
* @brief: Aula 16 exercicio 5
*/

#include <stdio.h>
#include <stdlib.h>

int CalculaFatorial (int numero){
  int fatorial;
  if (numero == 0 || numero == 1){
    fatorial = 1;
  }else{
    fatorial = numero * (numero - 1);
    numero = numero - 2;
    for (size_t i = numero ; i > 1; i--){
      fatorial = fatorial * numero;
      numero--;
    }//for
  }//else
  return fatorial;
}//CalculaFatorial

int main(){
  int Numero;
  printf("Digite um numero:");
  scanf("%d", &Numero);
  int Fatorial = CalculaFatorial(Numero);
  printf ("Fatorial:%d\n",Fatorial);
}
