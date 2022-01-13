/*
* @file: p1ex1
* @date: 20/07/2021
* @author: Rodrigo Leandro Benedito
* @brief: Aula 5 exerc�cio 1
*
* Fa�a um programa que exiba um menu com duas op��es:
*
* a - IMC
* b - Nata��o
*
* Na op��o a, o programa deve receber o peso (em kg) e a altura de uma pessoa
* (em metros), calcular e exibir o IMC - �ndice de Massa Corporal da pessoa com
* uma casa decimal. Para isso, utilize a f�rmula IMC = peso / (altura�) .
* Se o IMC for menor que 18,5 o programa deve exibir a mensagem "Abaixo do peso".
* Se o IMC for maior ou igual a 18,5 e menor que 25, o programa deve exibir
* "Peso Normal". Se o IMC for igual ou maior que 25, o programa deve exibir
* "Acima do Peso". Para isso, seu programa * * deve utilizar estruturas de
* sele��o (IF)
*
* Na segunda op��o, elabore um programa que, dada a idade de um nadador,
* classifique-o em uma das seguintes categorias:
*
*   infantil A = 5 - 7 anos
*   infantil B = 8 - 10 anos
*   juvenil A = 11 - 13 anos
*   juvenil B = 14 - 17 anos
*   adulto = maiores de 17 anos
*   o programa dever� informar "Idade sem categoria dispon�vel" caso uma idade
* inferior a cinco anos seja digitada.
*
* Observa��es:
*
* Seu programa deve fazer a sele��o da op��o de entrada aceitando letras
* mai�sculas e minusculas e usando a estrutura de sele��o adequada.
* Seu menu deve tratar o caso do usu�rio digitar uma op��o inv�lida,
* retornando mensagem de erro.
* O menu deve ser exibido e executado apenas uma vez.
*
*/

#include <stdio.h>
#include <stdlib.h>

int main () {

  //declarar as variaveis
  float peso;
  float altura;
  int idade;
  float imc;
  char opcao;

  printf ("MENU:\n\n");
  printf ("a - IMC\n");
  printf ("b - Nata��o\n");
  printf ("Digite sua op��o:");
  scanf ("%c", &opcao);

  //fazer menu com 2 opc�es sendo uma IMC e outra nata��o
  switch (opcao){
    //primeira op��o - receber 2 valores do usu�rio semdo um a altura e o outro peso
    //calcular o IMC com os 2 valores inceridos pelo usuario e
    //exibir a qual categoria o IMC pertence sendo elas:
    //abaixo do peso, acima do peso e peso normal.
    case 'a':
    case 'A':

      printf("digite a altura:");
      scanf ("%f", &altura);
      printf("Digite o peso:");
      scanf ("%f", &peso);
      imc = peso / (altura * altura);
      printf ("O IMC � igual a:%.1f\n", imc);
      if (imc < 18.5){
        printf ("Abaixo do peso\n");
      }if (imc >= 18.5 && imc < 25){
          printf ("Peso normal\n");
        }if (imc >= 25){
            printf ("Acima do peso\n");
          }
      break;

      //segunda op��o - receber uma idade e indentificar qual categoria ela pertence
      //sendo elas : categoria Infantil A e B, juvenil A e B e Adulto
      //se estiver fora dessas categorias exiba "Idade sem categoria dispon�vel"

    case 'b':
    case 'B':
    printf ("digite a idade:");
    scanf ("%i", &idade);
    if(idade >= 5 && idade <= 7 ){
      printf ("Categoria infantil A\n");
    }else{
      if (idade >= 8 && idade <= 10){
        printf ("Categoria infantil B\n");
      }else{
        if (idade >= 11 && idade <= 13){
          printf ("Categoria juvenil A\n");
        }else{
          if (idade >= 14 && idade <= 17){
            printf ("Categoria juvenil B\n");
          }else{
            if (idade > 17){
              printf ("Categoria Adulto\n");
            }else{
              if (idade < 5){
                printf ("Idade sem categoria dispon�vel\n");
              }
            }
          }
        }
      }
    }
      break;

  }//switch


  return 0;

}//main
