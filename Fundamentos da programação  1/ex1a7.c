/*
* @file: ex1a7
* @date: 11/07/2021
* @author: Rodrigo Leandro Benedito
* @brief: Aula 7 exercício 1
* Crie um programa que forneça um menu com duas
* opções. Caso o usuário digite 1, o programa solicitará um
* número e verificará se o valor é par ou impar. Caso o
* usuário digite 2, o programa solicitará uma idade e
* verificará se pessoa é maior ou menor de idade.
*/

# include <stdio.h>
# include <stdlib.h>
# include <locale.h>

int main () {

  setlocale (LC_ALL,"");

  //declarar as variáveis
  int valor1;
  int valor2;
  int resultado;
  int opcao;

  //fazer um menu com duas opções sendo uma para definir se um numero é
  printf ("Menu do programa\n \n");
  printf ("1-Verificar se o numero é par ou impar\n");
  printf ("2-Verificar se você é maior de idade\n \n");
  printf ("Digite a opção desejada:\n");
  scanf ("%i", &opcao);

  switch (opcao){
    case 1:
      printf ("digite um valor:");
      scanf ("%i", &valor1);
      resultado = valor1 % 2;
      if(resultado == 0){
        printf ("Seu número é par\n");
      }else{
        printf ("Seu número é ímpar\n");
      }
      break;
    case 2:
    printf ("Digite sua idade:\n");
    scanf ("%i", &valor2);
    if(valor2 >= 18){
      printf ("Você é maior de idade\n");
    }else{
      if (valor2 < 0){
        printf ("Valor inválido\n");
      }else{
        printf ("Você é menor de idade\n");
      }
    }
    break;
  }//switch

  return 0;
  //par ou impar e outro para definir e a pessoa é mairo ou menor de idade
  //exiba na tela o resultado

}//main
