#include <stdio.h>
#include <stdlib.h>

int main(){
  int vet [5];
  int *ptrvet = &vet[0];


  for(int i = 0; i < 5; i++){
    printf("digite o valor %i:",i+1);
    scanf("%d",ptrvet);
    ptrvet++;
    printf("valor %i:%d\n",i+1,vet[i]*2);
    printf("\n");
  }

  for(int i = 0; i < 5; i++){
    if(vet[i]%2 == 0){
      printf("Valor %i: %p\n\n",i+1,ptrvet+i);
    }
  }

}
