/*
* @file: ex4a4.c
* @date: 30/06/2021
* @author: Rodrigo Leandro Benedito
* @brief: Aula 4 exercício 4
* 4) Tendo a Altura da pessoa definida como uma constante,
* calcule seu peso ideal utilizando a seguinte fórmula:
*  peso ideal = 72.7 x altura – 58
*/
  #include <stdio.h>
  #include <stdlib.h>

  #define altura 1.70

  int main () {

    float peso_ideal;

    //Calcular o peso_ideal
    peso_ideal = 72.2 * altura - 58;
    printf("Peso Ideal:%.2fKg\n", peso_ideal );

    return 0;
  }
