/*
* @file: ex9a8
* @date: 14/07/2021
* @author: Rodrigo Leandro Benedito
* @brief: Aula 8 exercício 9
*
*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

int main () {

  setlocale (LC_ALL, "");

  int i = 0;
  int valor1;
  int valor2;

  srand (time(NULL));
  valor2 = rand() % 100;

  while (i < 6){
    printf ("%i\n", valor2);
    printf ("Digite um valor:");
    scanf ("%i", &valor1);
    if (valor1 > valor2){
      printf ("Valor muito alto\n");
    }else{
      if (valor1 < valor2){
        printf ("valor muito baixo\n");
      }else{
        if (valor1 = valor2){
          printf ("você acertou\n");
          return 0;
        }//if
      }//else2
    }//else1
    i++;
  }//while
  return 0;
}//main
