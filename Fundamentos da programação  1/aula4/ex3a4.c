/*
* @file: ex3a4.c
* @date: 30/06/2021
* @author: Rodrigo Leandro Benedito
* @brief: Aula 4 exercício 3
* 3) Faça um programa com 2 variáveis, A e B, onde A terá
* o valor 40 e B terá o valor -1. Imprima o valor de A+B, A-B,
* AxB e A/B. Em seguida, faça B incrementar de uma
* unidade e repita as 4 operações.
*/

  #include <stdio.h>
  #include <stdlib.h>

  int main() {

    int a = 40;
    int b = -1;
    int c;

    c = a+b;
    printf ("resultado: %d\n", c);
    c = a-b;
    printf ("resultado: %d\n", c);
    c = a*b;
    printf ("resultado: %d\n", c);
    c = a/b;
    printf ("resultado: %d\n", c);

    b++;

    c = a+b;
    printf ("resultado: %d\n", c);
    c = a-b;
    printf ("resultado: %d\n", c);
    c = a*b;
    printf ("resultado: %d\n", c);
    c = a/b;
    printf ("resultado: %d\n", c);

    return 0;


  }
