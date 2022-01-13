/*
* @file: ex1a5.c
* @date: 05/07/2021
* @author: Rodrigo Leandro Benedito
* @brief: Aula 5 exercício 1
* 1) Faça um programa que receba a altura de uma pessoa e
* calcule e exiba seu peso ideal utilizando a seguinte:
* peso ideal = 72.7 x altura – 58
*/

  #include <stdio.h>
  #include <stdlib.h>

  int main () {

  //declarar as variaveis
  float peso_ideal;
  float altura;

  //pedir para o usuario digitar sua altura
  printf("Digite sua altura:");
  scanf ("%f",&altura);

  //Calcular o peso_ideal e exibir na tela
  peso_ideal = 72.2 * altura - 58;
  printf("Peso Ideal:%.2fKg\n", peso_ideal );

  return 0;
}
