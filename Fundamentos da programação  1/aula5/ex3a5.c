/*
* @file: ex3a5.c
* @date: 05/07/2021
* @author: Rodrigo Leandro Benedito
* @brief: Aula 5 exercício 3
* 3) Tendo como entrada de dados o total vendido por um
* funcionário no mês, calcule a sua comissão e o salário bruto no
* mês. Para isso, considere um salrio base de R$1.200,00 e
* comissão de 10% sobre o total vendido.
*/

  #include <stdio.h>
  #include <stdlib.h>
  #include <locale.h>

  int main () {

    setlocale(LC_ALL, "PORTUGUESE");

    //Declarar as variaveis
    float total_vendido;
    float comissao_salario;
    float salario_bruto;
    float salario_base = 1200;
    float comissao_p = 0.1;

    //pedir para o usuario inserir o seu valor total vendido no mês
    printf ("Digite o total vendido:");
    scanf ("%f", &total_vendido);

    //calcular a comissão e o salario bruto e exibir na tela
    comissao_salario = total_vendido * comissao_p;
    printf ("Comissão: %.2f\n", comissao_salario);
    salario_bruto = comissao_salario + salario_base;
    printf ("Salario bruto: %.2f\n", salario_bruto);

    return 0;

  }
