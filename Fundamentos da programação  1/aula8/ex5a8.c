/*
* @file: ex5a8
* @date: 14/07/2021
* @author: Rodrigo Leandro Benedito
* @brief: Aula 8 exerc�cio 5
*
*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {

  setlocale (LC_ALL, "");

int valor1;
int i = 0;

printf ("\t Eleve n�meros ao quadrado\n \n");

while (i  < 10){
  printf ("Digite um valor:");
  scanf ("%i", &valor1);
  valor1 = valor1 * valor1;
  printf ("O quadrado deste n�mero �: %i\n \n", valor1);
  printf ("---------------------------------------------------\n \n");
  i++;
  }
  return 0;
}
