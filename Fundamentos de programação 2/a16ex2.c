/*
* @file: a16ex2
* @date: 13/10/2021
* @author: Rodrigo leandro Benedito
* @brief: Aula 16 exercicio 2
*/
#include <stdio.h>
#include <stdlib.h>

float PesoIdeal(float altura, char opcao){
  float pesoI;
  switch (opcao) {
    case 'M' :
    pesoI = (72.7 * altura) - 58;
    break;
    case 'm':
    pesoI = (72.7 * altura) - 58;
    break;
    case 'F':
    pesoI = (62.1 * altura)- 44.7;
    break;
    case 'f':
    pesoI = (62.1 * altura)- 44.7;
    break;
  }//switch
  return pesoI;
}//PesoIdeal

 int main (){
   char Sexo;
   float Altura;

   printf("Digite seu sexo, sendo M para Masculino e F para Feminino:");
   scanf("%c", &Sexo);
   printf("Digite sua altura:");
   scanf("%f", &Altura);
   float pesoIdeal = PesoIdeal (Altura, Sexo);
   printf("Seu peso ideal e:%.2f\n ",pesoIdeal);

   return 0;
 }//main
