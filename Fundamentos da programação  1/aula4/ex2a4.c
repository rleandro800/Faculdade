/*
* @file: ex2a4.c
* @date: 30/06/2021
* @author: Rodrigo Leandro Benedito
* @brief: Aula 4 exercício 2
* 2) Uma conta de caderneta de poupança foi aberta com um
* depósito de R$ 500,00. Imagine que esta conta é remunerada
* em 1% de juros ao mês. Qual será o valor da conta após três
* meses?
*/

#include <stdio.h>
#include <stdlib.h>

int main () {

  float valor_inicial = 500;
  float juros_mes = 0.01;
  float valor_mes1;
  float valor_mes2;
  float valor_mes3;

  //passo 1 descobrir o valor_mes1
  //multiplicar valor_inicial com o juros_mes mais valor valor_inicial
  valor_mes1 = valor_inicial * juros_mes + valor_inicial;

  //passo 2 descobrir o valor_mes2
  // multiplicar valor_mes1 com o juros_mes mais o valor_mes1
  valor_mes2 = valor_mes1 * juros_mes + valor_mes1;

  //passo 3 descobrir valor_mes3
  // multiplicar valor_mes2 com o juros_mes mais o valor_mes2
  valor_mes3 = valor_mes2 * juros_mes + valor_mes2;
  printf("Valor Final:R$ %.2f\n", valor_mes3);

  return 0;

}
