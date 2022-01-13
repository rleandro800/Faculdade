#include <stdio.h>
#include <stdlib.h>

int main(){
  float vet [10];
  int i;

  for( i= 0; i < 10; i++){
    printf("endereco %i: %p\n",i+1,&vet[i]);
  }//for
  return 0;
}//main
