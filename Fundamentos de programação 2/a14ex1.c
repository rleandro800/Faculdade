# include <stdio.h>
# include <stdlib.h>
# include <math.h>

typedef struct{
  int CordenadaX;
  int CordenadaY;
}Cordenada;

int main(){

  Cordenada cordenada1, cordenada2;
  int resultadopx;
  int resultadopy;
  int resultadop;
  int resultadof;

  printf("Digite a cordenada x do primeiro ponto:");
  scanf ("%i",&cordenada1.CordenadaX);
  printf("Digite a cordenada y do primeiro ponto:");
  scanf ("%i",&cordenada1.CordenadaY);

  printf("Digite a cordenada x do segundo ponto:");
  scanf ("%i",&cordenada2.CordenadaX);
  printf("Digite a cordenada y do segundo ponto:");
  scanf ("%i",&cordenada2.CordenadaY);

  resultadopx = cordenada2.CordenadaX - cordenada1.CordenadaX;
  resultadopy = cordenada2.CordenadaY - cordenada1.CordenadaY;

  resultadopx = resultadopx * resultadopx;
  resultadopy = resultadopy * resultadopy;

  resultadop = resultadopy + resultadopx;

  sqrt (resultadop);// raiz não esta funcionando 

  printf("o resutado e: %i", resultadop);

}
