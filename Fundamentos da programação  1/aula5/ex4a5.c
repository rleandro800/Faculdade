/*
* @file: ex4a5.c
* @date: 05/07/2021
* @author: Rodrigo Leandro Benedito
* @brief: Aula 5 exerc�cio 4
* 4) Calcule a m�dia aritm�tica de 4 n�meros reais que o usu�rio
* digitar. Imprima a m�dia na tela apenas com 2 casas decimais.
*/

  #include <stdio.h>
  #include <stdlib.h>
  #include <locale.h>

  int main () {

    setlocale (LC_ALL, "");

    //Declarar as vari�veis
    float valor1;
    float valor2;
    float valor3;
    float valor4;
    float media;

    //Pedir para o usuario inserir 4 valores
    printf ("Digite um n�mero:");
    scanf ("%f", &valor1);

    printf ("Digite outro n�mero:");
    scanf ("%f", &valor2);

    printf ("Digite outro n�mero:");
    scanf ("%f", &valor3);

    printf ("Digite mais um n�mero:");
    scanf ("%f", &valor4);

    //calcular e exibir a m�dia dos 4 valores
    media = (valor1 + valor2 + valor3 + valor4) / 4;
    printf ("A m�dia �: %.2f\n", media);

    return 0;

  }
