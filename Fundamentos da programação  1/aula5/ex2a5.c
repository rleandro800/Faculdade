/*
* @file: ex2a5.c
* @date: 05/07/2021
* @author: Rodrigo Leandro Benedito
* @brief: Aula 5 exerc�cio 2
* 2) Faça um programa que calcule e mostre a idade de uma
* pessoa a partir do ano em que a pessoa nasceu e do ano atual.
* Obs.:Considere que ela j� fez anivers�rio neste ano.
*/

  #include <stdio.h>
  #include <stdlib.h>
  #include <locale.h>

  int main (){

    setlocale(LC_ALL, "");

    //declarar as variaveis
    int ano_nascimento;
    int ano_atual;
    int idade;

    //pedir para o usuario inserir o seu ano de nascimento
    printf("digite o ano em que voce nasceu:");
    scanf ("%i",&ano_nascimento);

    //pedir para o usuario inserir o ano atual
    printf ("Digite o ano atual:");
    scanf ("%i",&ano_atual);

    //calcular a idade
    idade = ano_atual - ano_nascimento;

    //exibir a idade
    printf("Sua idade �: %i anos\n",idade);

    return 0;


  }
