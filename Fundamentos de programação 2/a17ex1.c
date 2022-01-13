#include <stdio.h>
#include <stdlib.h>

void converteHora(int total_segundos, int* hora, int* min, int* seg){

  (*seg) = total_segundos % 60;
  (*min) = total_segundos /60;
  (*hora) = (*min) / 60;
  (*min) = (*min) % 60;
}//converteHora

int main(){
  int TotalSegundos;
  int Hora, Min, Seg;

  printf ("Digite o total de segundos:");
  scanf("%i", &TotalSegundos);
  converteHora(TotalSegundos, &Hora, &Min, &Seg);
  printf("Hora %d:%d:%d", Hora, Min, Seg);
}//main
