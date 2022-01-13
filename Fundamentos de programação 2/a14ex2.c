 # include <stdio.h>
 # include <stdlib.h>
 # include <string.h>

 typedef struct{
  int hora;
  int minutos;
  int segundos;
}horario;

typedef struct{
  int dia;
  int mes;
  int ano;
}data;

 typedef struct{
  char local [50];
  char descricao [100];
  horario hr;
  data dt;
 }
