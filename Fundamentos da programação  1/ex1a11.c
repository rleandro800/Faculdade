/*
* @file: ex1a11
* @date: 28/07/2021
* @author: Rodrigo Leandro Benedito
* @brief: Aula 11 exercício 1
* 1) Faça um programa que leia e armazene dois vetores de
* tamanho 5. Ao final o programa deve calcular e exibir o vetor
* soma;
*/

# include <stdio.h>
# include <stdlib.h>

int main () {

  //declarar as variáveis
  int vetor1 [5];
  int vetor2 [5];
  int resultado [5];

  //somar dois valores e exibir na tela 5 vezes
  for(int i = 0; i < 5; i++){
    printf ("digite dois valores para serem somados:");
    scanf ("%i", &vetor1 [i]);
    scanf ("%i", &vetor2 [i]);
    resultado [i] = vetor1 [i] + vetor2 [i];
    printf ("O resultado é:%i\n", resultado [i]);

  }

  return 0;

}//main
