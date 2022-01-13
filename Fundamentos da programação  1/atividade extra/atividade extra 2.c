# include <stdio.h>
# include <stdlib.h>
# include <locale.h>

int main () {

  setlocale (LC_ALL,"");

  //declarar as variaveis
  int dia;
  int mes;
  int ano;

  //pedir para o usuario inserir o dia mês e ano
  printf ("Digite o dia/mês/ano:\n");
  scanf ("%i/%i/%i", &dia, &mes, &ano);

  //comferir de a tata é valida e exibir na tela
  if(mes < 0 && mes > 12){
    printf ("mês inválido");
  }else{
    if (mes = 11 || 9 || 6 || 4 || 1){
      if (dia < 0 && dia > 30){
        printf ("dia inválido");
      }
    }
    if (mes = 12 || 10 || 8 || 7 || 5 || 3){
      if (dia < 0 && dia > 31){
      printf ("dia inválido");
      }
    }
  }//mes

}//main
