# include <stdio.h>
# include <stdlib.h>

typedef struct{
  char nome[16];
  float kw;
  float tempo;
  float consumoTotal;
  float consumoDias;
  float consumoRelativo;
}eletro;

int main(){

  int dias;
  float consumoTeletro = 0;
  float consumoGeral;
  eletro Eletro[5];
  for(int i= 0; i < 5; i++){
    printf ("Escreva o nome do eletrodomestico %i:",i+1);
    setbuf(stdin,NULL);
    fgets(Eletro[i].nome, 15,stdin);
    setbuf(stdin,NULL);
    printf ("Esceva a potencia (Kw):");
    scanf("%f",&Eletro[i].kw);
    printf("escreva o numero de horas que o eletrodomestico %i fica ligado:", i+1);
    scanf("%f",&Eletro[i].tempo);
    Eletro[i].consumoTotal= Eletro[i].kw * Eletro[i].tempo;
    consumoTeletro = consumoTeletro + Eletro[i].consumoTotal;
  }//for
  printf("Escreva a quantidade de dias que os eletrodomesticos ficaram ligados:");
  scanf("%i",&dias);
  consumoGeral = consumoTeletro * dias;

  printf("Resultado:%f", consumoGeral);

  for(int i= 0; i < 5; i++){
    Eletro[i].consumoDias = Eletro[i].consumoTotal * dias;
    Eletro[i].consumoRelativo = (Eletro[i].consumoDias / consumoGeral) * 100;
    printf("Consumo relativo do eltrtodomestico %i:%.2f%%\n",i+1,Eletro[i].consumoRelativo);
  }
}//main
