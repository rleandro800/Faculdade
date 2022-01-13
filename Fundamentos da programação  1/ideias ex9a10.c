/*
* @file: ex10a7
* @date: 26/07/2021
* @author: Rodrigo Leandro Benedito
* @brief: Aula 10 exercício 7
* Faça um programa que mostre n elementos da sequência de Fibonacci.
* O valor de n é passado para o programa.
* O primeiro termo é 0, e o segundo termo é 1, os demais devem
* seguir a fórmula tn = tn-1 + tn-2
*/
# include <stdio.h>
# include <stdlib.h>

int main() {
  //declarar variáveis
  int resultado = 0;
  int i_1 = 1, i_2 = 0;
  int i, x = 0;
  int valor;
  //pedir para o usuario digitar um valor
  printf("digite o numero:");
  scanf("%i", &valor);

  if(valor > 2){
    printf ("0 ");
    printf ("1 ");
  }

  for(i = 1; i<= valor; i++){
    if(valor == 1){
      printf("0");
        return 0;
    }else{
      if(valor == 2){
        printf ("0 ");
        printf ("1 ");
          return 0;
      }else{
        if(x == 0 ){
          resultado = i_1 + i_2;
          printf("%i ", resultado);
          i_2 = resultado;
          x = 1;
        }else{
          if(x == 1){
            resultado = i_1 + i_2;
            printf("%i ", resultado);
            i_1 = resultado;
            x = 0;
          }
        }
      }
    }
  }//for
  return 0;
}//main
