/*
* @file: ex3a11
* @date: 28/07/2021
* @author: Rodrigo Leandro Benedito
* @brief: Aula 11 exercício 3
* 3) Leia um vetor A com 10 elementos inteiros correspondentes
* as idades de um grupo de pessoas. Escreva um programa que
* conte e exiba a quantidade de pessoas que possuem idade
* superior a 35 anos.
*/

# include <stdio.h>
# include <stdlib.h>

int main () {

  //declarar as variáveis
  int idades [10];
  int i;
  int j;
  int contador = 0;

  //receber 10 idades e armazenar
  for (i = 0, j = 1; i < 10, j < 11; i++, j++){
    printf ("Digite a idade %i:", j);
    scanf ("%i", &idades [i]);
  }
  //descobrir quantas idades são maiores que 35 anos
  for(i = 0; i < 10; i++){
    if(idades [i] > 35){
      contador++;
    }
  }
  //exibir na tela
  printf("Número de idades maiores que 35 anos:%i",contador);

  return 0;
}//main
