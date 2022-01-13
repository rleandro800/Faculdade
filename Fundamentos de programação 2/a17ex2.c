#include <stdio.h>
#include <stdlib.h>

typedef struct{
    int hora;
    int minuto;
    int segundo;
    int segundos_total;
}time;

void converteHora(int totalSegundos, time *horario);
int main() {

    time tempo;

    printf("digite os segundos: \n");
    scanf("%i", &tempo.segundos_total);

    converteHora(tempo.segundos_total, &tempo);

    printf("\n%i:%i:%i\n",tempo.hora,tempo.minuto,tempo.segundo);
    return 0;
}

void converteHora(int totalSegundos, time *horario){

    horario->segundo = totalSegundos%60;
    horario->minuto = totalSegundos/60;
    horario->hora = horario->minuto/60;
    horario->minuto = horario->minuto%60;
}
