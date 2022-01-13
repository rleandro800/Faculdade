/*
* @file: ex1a4.c
* @date: 30/06/2021
* @author: Rodrigo Leandro Benedito
* @brief: Aula 4 exercício 1
* 1) Escreva um programa para determinar a quantidade de litros
* de combustível gastos em uma viagem por um automóvel que
* faz 12 km/litro. Para isso, sabe-se que o tempo gasto na viagem
* é de 35 min e a velocidade média do automóvel é 80 km/h.
*/
#include <stdio.h>
#include <stdlib.h>
#include <stdlib.h>

int main (){

  float tempo_min = 35;
  float rendimento = 12;
  float velocidade_media = 80;
  float tempo_hora;
  float combustivel_gasto;
  float deslocamento;

  //passo 1 trasformar tempo_min para tempo_hora
  //dividir o tempo_min por 60
  tempo_hora = tempo_min / 60;

  //descobrir o deslocamento
  //multiplicar tempo_hora por velocidade_media
  deslocamento = tempo_hora * velocidade_media;

  //descobrir o combustivel_gasto
  //dividir o deslocamento pelo rendimento
  combustivel_gasto = deslocamento / rendimento;
  printf ( "Combustivel Gasto: %.2f Litros\n", combustivel_gasto);

  return 0;

}
