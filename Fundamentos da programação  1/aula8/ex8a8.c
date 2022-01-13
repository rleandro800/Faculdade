/*
* @file: ex8a8
* @date: 14/07/2021
* @author: Rodrigo Leandro Benedito
* @brief: Aula 8 exercício 8
*
*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {

  setlocale (LC_ALL, "");

  int opcao = 0;

  while (opcao != 3){
    printf ("Menu do programa:\n \n");
    printf ("1- Teste 1\n");
    printf ("2- Teste 2\n");
    printf("3- Sair do programa\n \n");
    printf ("Digite sua opção:");
    scanf ("%i", &opcao);


    switch (opcao) {
      case 1:

          printf ("Teste 1\n \n");
          break;
      case 2:
          printf ("Teste 2\n \n");
          break;
      case 3:
          printf ("Programa finalizado\n");
          break;
      default:
          printf ("Erro\n");

    }//switch
  }//while
  return 0;
}//main
