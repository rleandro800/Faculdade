/*
* @file: ex5a10
* @date: 25/07/2021
* @author: Rodrigo Leandro Benedito
* @brief: Aula 10 exercício 5
*5) Faça um programa que calcule o fatorial de um número a ser
* digitado.
*/
# include <stdio.h>
# include <stdlib.h>
# include <locale.h>

int main () {

  setlocale(LC_ALL,"");

  //declarar as variáveis
  int valor = 0;
  int fatorial = 1;
  int i;

  //pedir para o usuario inserir um valor
  printf ("Digite um valor:");
  scanf ("%d", &valor);

  //calcular o valor fatorial do número
  do{
    if(valor == 0){
      fatorial = 1;
    }else{
      if(valor < 0){
        printf("Valor inválido, digite novamente");
      }
    }//if
  }while(valor < 0);


  for (i = 1 ; i <= valor ; i++){
    fatorial = fatorial * i;
  }//for

  //exibir o resultado na tela
  printf ("o resultado é:%d\n", fatorial);

  return 0;
}//main
