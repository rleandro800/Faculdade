/*
* @file: ex1a7
* @date: 11/07/2021
* @author: Rodrigo Leandro Benedito
* @brief: Aula 7 exerc�cio 1
* Crie um programa que forne�a um menu com duas
* op��es. Caso o usu�rio digite 1, o programa solicitar� um
* n�mero e verificar� se o valor � par ou impar. Caso o
* usu�rio digite 2, o programa solicitar� uma idade e
* verificar� se pessoa � maior ou menor de idade.
*/

# include <stdio.h>
# include <stdlib.h>
# include <locale.h>

int main () {

  setlocale (LC_ALL,"");

  //declarar as vari�veis
  int valor1;
  int valor2;
  int resultado;
  int opcao;

  //fazer um menu com duas op��es sendo uma para definir se um numero �
  printf ("Menu do programa\n \n");
  printf ("1-Verificar se o numero � par ou impar\n");
  printf ("2-Verificar se voc� � maior de idade\n \n");
  printf ("Digite a op��o desejada:\n");
  scanf ("%i", &opcao);

  switch (opcao){
    case 1:
      printf ("digite um valor:");
      scanf ("%i", &valor1);
      resultado = valor1 % 2;
      if(resultado == 0){
        printf ("Seu n�mero � par\n");
      }else{
        printf ("Seu n�mero � �mpar\n");
      }
      break;
    case 2:
    printf ("Digite sua idade:\n");
    scanf ("%i", &valor2);
    if(valor2 >= 18){
      printf ("Voc� � maior de idade\n");
    }else{
      if (valor2 < 0){
        printf ("Valor inv�lido\n");
      }else{
        printf ("Voc� � menor de idade\n");
      }
    }
    break;
  }//switch

  return 0;
  //par ou impar e outro para definir e a pessoa � mairo ou menor de idade
  //exiba na tela o resultado

}//main
