#include <stdio.h>
#include <stdlib.h>

typedef enum {JANEIRO=1, FEVEREIRO, MARCO, ABRIL, MAIO, JUNHO, JULHO, AGOSTO, SETEMBRO, OUTUBRO, NOVEMBRO, DEZEMBRO} Meses;
//typedef enum {31 = 1, 28 ou 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31} Dias;

int main () {
  //Meses meses;
  int opcao;

  printf("Digite o numero de um mes:");
  scanf("%i",&opcao);

  switch(opcao){
    case JANEIRO:
      printf("Mes: Janeiro 31 Dias");
      break;
    case FEVEREIRO:
      printf("Mes: Fevereiro 28 ou 29 Dias");
      break;
    case MARCO:
      printf("Mes: Março 31 Dias");
      break;
    case ABRIL:
      printf("Mes: Abril 30 Dias");
      break;
    case MAIO:
      printf("Mes: Maio 31 Dias");
      break;
    case JUNHO:
      printf("Mes: Junho 30 Dias");
      break;
    case JULHO:
      printf("Mes: Julho 31 Dias");
      break;
    case AGOSTO:
      printf("Mes: Agosto 31 Dias");
      break;
    case SETEMBRO:
      printf("Mes: Setembro 30 Dias");
      break;
    case OUTUBRO:
      printf("Mes: Outubro 31 Dias");
      break;
    case NOVEMBRO:
      printf("Mes: Novembro 30 Dias");
      break;
    case DEZEMBRO:
      printf("Mes: Dezembro 31 Dias");
      break;
  }//switch
}//main
