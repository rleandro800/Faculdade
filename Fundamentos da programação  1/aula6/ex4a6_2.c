/*
* @file: ex4a6_2
* @date: 07/07/2021
* @author: Rodrigo Leandro Benedito
* @brief: Aula 6 exercício 4
*4) Faça um programa que calcule o imposto de renda a ser
* pago tendo como entrada o salário de um empregado. O
* imposto deve ser calculado da seguinte maneira:
* imposto = salário x alíquota – parcela da dedução
*
* Base de Cálculo           (R$) Alíquota   (%) Parcela a
*                                           Deduzir (R$)
* de 0,00 até 1.903,98       isento         0,00
* de 1.903,99 até 2.826,65   7,5            142,80
* de 2.826,66 até 3.751,05   15             354,80
* de 3.751,06 até 4.664,68   22,5           636,13
* a partir de 4.664,68       27,5           869,36
*/

# include <stdio.h>
# include <stdlib.h>
# include <locale.h>

int main () {

  setlocale (LC_ALL, "");

  //Declarar as variáveis
  float salario;
  float imposto;
  float aliquota;
  float parcela_ded;

  //Pedir para o usuario inserir o valor do salário
  printf ("Digite o valor do salário:");
  scanf ("%f", &salario);

  //Determinar em qual faixa está o salário do empregado para descobrir
  //a alíquota e a parcela de dedução
  //Calcular o valor do inposto a ser pago e exibir na tela
  if(salario <= 1903.98){
    printf ("Não a imposto à ser pago");
  }else{
    if (salario <= 2826.65){
      aliquota = 0.075;
      parcela_ded = 142.80;
      imposto = salario * aliquota - parcela_ded;
      printf ("O imposto a ser pago é: %.2f\n", imposto );
    }else{
      if (salario <= 3751.05){
        aliquota = 0.15;
        parcela_ded = 354.80;
        imposto = salario * aliquota - parcela_ded;
        printf ("O imposto a ser pago é: %.2f\n", imposto );
      }else{
        if (salario <= 4664.68){
          aliquota = 0.225;
          parcela_ded = 869.13;
          imposto = salario * aliquota - parcela_ded;
          printf ("O imposto a ser pago é: %.2f\n", imposto );
        }else{
          if (salario > 4664.68){
            aliquota = 0.275;
            parcela_ded = 869.36;
            imposto = salario * aliquota - parcela_ded;
            printf ("O imposto a ser pago é: %.2f\n", imposto );
          }
        }
      }
    }
  }

  return 0;

}//main
