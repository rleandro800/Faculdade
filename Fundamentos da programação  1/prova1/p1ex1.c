/*
* @file: p1ex1
* @date: 20/07/2021
* @author: Rodrigo Leandro Benedito
* @brief: Aula 5 exercício 1
*
* Faça um programa que exiba um menu com duas opções:
*
* a - IMC
* b - Natação
*
* Na opção a, o programa deve receber o peso (em kg) e a altura de uma pessoa
* (em metros), calcular e exibir o IMC - Índice de Massa Corporal da pessoa com
* uma casa decimal. Para isso, utilize a fórmula IMC = peso / (altura²) .
* Se o IMC for menor que 18,5 o programa deve exibir a mensagem "Abaixo do peso".
* Se o IMC for maior ou igual a 18,5 e menor que 25, o programa deve exibir
* "Peso Normal". Se o IMC for igual ou maior que 25, o programa deve exibir
* "Acima do Peso". Para isso, seu programa * * deve utilizar estruturas de
* seleção (IF)
*
* Na segunda opção, elabore um programa que, dada a idade de um nadador,
* classifique-o em uma das seguintes categorias:
*
*   infantil A = 5 - 7 anos
*   infantil B = 8 - 10 anos
*   juvenil A = 11 - 13 anos
*   juvenil B = 14 - 17 anos
*   adulto = maiores de 17 anos
*   o programa deverá informar "Idade sem categoria disponível" caso uma idade
* inferior a cinco anos seja digitada.
*
* Observações:
*
* Seu programa deve fazer a seleção da opção de entrada aceitando letras
* maiúsculas e minusculas e usando a estrutura de seleção adequada.
* Seu menu deve tratar o caso do usuário digitar uma opção inválida,
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
  printf ("b - Natação\n");
  printf ("Digite sua opção:");
  scanf ("%c", &opcao);

  //fazer menu com 2 opcões sendo uma IMC e outra natação
  switch (opcao){
    //primeira opção - receber 2 valores do usuário semdo um a altura e o outro peso
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
      printf ("O IMC é igual a:%.1f\n", imc);
      if (imc < 18.5){
        printf ("Abaixo do peso\n");
      }if (imc >= 18.5 && imc < 25){
          printf ("Peso normal\n");
        }if (imc >= 25){
            printf ("Acima do peso\n");
          }
      break;

      //segunda opção - receber uma idade e indentificar qual categoria ela pertence
      //sendo elas : categoria Infantil A e B, juvenil A e B e Adulto
      //se estiver fora dessas categorias exiba "Idade sem categoria disponível"

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
                printf ("Idade sem categoria disponível\n");
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
