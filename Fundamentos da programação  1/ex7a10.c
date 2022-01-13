#include <stdio.h>
#include <stdlib.h>

int main () {

  int valor;
  int i;
  int resultado = 1;
  int valor1;
  int valor2;

  printf("digite um valor:");
  scanf ("%i", &valor);

  if(valor == 1){
    printf("0");
      return 0;
  }else{
    if(valor == 2){
      printf ("0");
      printf ("1");
        return 0;
    }else{
      if (valor > 2){
        printf ("0");
        printf ("1");

      }
    }
  }



  for(i= 3; i < valor; i++){
    resultado = (resultado - 1) + (resultado -2);
    printf ("%i", resultado);
  }
  return 0;

}
