/*
* @file: ex3a6
* @date: 07/07/2021
* @author: Rodrigo Leandro Benedito
* @brief: Aula 6 exercício 3
*3) Faça um programa que receba os coeficientes a, b e c
* de uma equação do segundo grau e retorne as raízes da
* equação (se existirem).
* Para isso, lembre-se da fórmula de Báskara:
*/
# include <stdio.h>
# include <stdlib.h>
# include <math.h>
# include <locale.h>

int main () {

  setlocale (LC_ALL,"");

  //declarar as vaviáveis
  float b;
  float a;
  float c;
  float a2;
  float b2;
  float delta;
  double raizdelta;
  float x1;
  float x2;

  //pedir ao usuário para inserir os valores de a, b e c
  printf ("digite o valor de a: ");
  scanf ("%f", &a);
  printf ("digite o valode de b: ");
  scanf ("%f", &b);
  printf ("Digite o valor de c: ");
  scanf ("%f", &c);

  //calcular o valor de b ao quadrado
  b2 = b * b;

  //calcular o valor de delta
  delta = b2 - 4 * a * c;

  //calcular o valor de 2 * a
  a2 = 2 * a;

  //calcular a raiz quadrada de delta
  raizdelta = sqrt (delta);

  //calcular o valor de x1 e x2
  x1 = (- b + raizdelta) / a2;
  x2 = (- b - raizdelta) / a2;

  if(delta > 0){
    printf ("x1= %lf\n", x1);
    printf ("x2= %lf\n", x2);
  }else{
    printf ("Não a um resultado real\n");
  }

  return 0;
}
