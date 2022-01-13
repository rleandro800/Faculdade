/*
* @file: ex2a13
* @date: 03/08/2021
* @author: Rodrigo Leandro Benedito
* @brief: Aula 13 exercício 2
* 2) Faça um programa que armazene o nome e salário de 5
* empregados. Em seguida calcule um aumento de 8% nos
* salários e exiba a nova folha de pagamentos.
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () {

  char nomesE [31] [5];
  float salario [5];
  int i;
  float salarioN [5];
  //receber o nome e o salário de 5 empregados
  for(i=0;i<5;i++){
    printf ("Digite o nome do empregado %i:", i+1);
    fgets(nomesE [i], 30, stdin);
    setbuf(stdin, NULL);
    printf ("Digite o valor do salario do empregado %i:", i+1);
    scanf("%f", &salario [i]);
    setbuf(stdin, NULL);
  }
  //calcular 8% a mais no salario
  for(i=0;i<5;i++){
    salarioN [i] = salario [i] + salario [i] * 0.08;
  }
  //mostras os valores com reajuste
  for(i=0;i<5;i++){
    printf("Nome do empregado %i: %s", i+1,nomesE [i]);
    printf("Salario novo do empredado %i: %.2f\n", i+1, salarioN [i] );
  }
}
