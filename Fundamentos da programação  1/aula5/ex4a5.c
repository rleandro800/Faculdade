/*
* @file: ex4a5.c
* @date: 05/07/2021
* @author: Rodrigo Leandro Benedito
* @brief: Aula 5 exercí­cio 4
* 4) Calcule a média aritmética de 4 números reais que o usuário
* digitar. Imprima a média na tela apenas com 2 casas decimais.
*/

  #include <stdio.h>
  #include <stdlib.h>
  #include <locale.h>

  int main () {

    setlocale (LC_ALL, "");

    //Declarar as variáveis
    float valor1;
    float valor2;
    float valor3;
    float valor4;
    float media;

    //Pedir para o usuario inserir 4 valores
    printf ("Digite um número:");
    scanf ("%f", &valor1);

    printf ("Digite outro número:");
    scanf ("%f", &valor2);

    printf ("Digite outro número:");
    scanf ("%f", &valor3);

    printf ("Digite mais um número:");
    scanf ("%f", &valor4);

    //calcular e exibir a média dos 4 valores
    media = (valor1 + valor2 + valor3 + valor4) / 4;
    printf ("A média é: %.2f\n", media);

    return 0;

  }
