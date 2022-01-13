/*
* @file: ex1a9
* @date: 16/07/2021
* @author: Rodrigo Leandro Benedito
* @brief: Aula 9 exercício 1
*1) Faça um programa que calcule a média para 5 alunos, sendo que
* cada aluno tem 2 notas (reais). O programa somente deverá aceitar
* notas no intervalo fechado de 0 a 10, solicitando nova digitação
* quando necessário.
*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {

  setlocale (LC_ALL, "");

  //delarar as variáveis
  float nota1;
  float nota2;
  float media;
  int i = 0;

  //receber 10 notas de 5 alunos sendo que elas tem que estar entra 0 e 10
  do {
    do {
    printf ("digite suas notas:\n\n");
    printf ("nota 1:");
    scanf ("%f", &nota1);
      if(nota1 < 0 || nota1 > 10){
        printf ("\nValor inválido\nDigite novamente\n\n");
      }
    } while (nota1 < 0 || nota1 > 10);
    do {
    printf ("nota 2:");
    scanf ("%f", &nota2);
      if(nota2 < 0 || nota2 > 10){
        printf ("\nValor inválido\nDigite novamente\n\n");
      }
    } while (nota2 < 0 || nota2 > 10);
    //calcular a media dos aluno
    media = (nota1 + nota2) / 2;
    //exibir na tela
    printf ("a média é: %.1f\n", media);
    i++;
  } while (i < 5);

  return 0;

}
