#include <stdio.h>
#include <stdlib.h>

int CriaPonteiro(int N){
  int vet[N];
  int *ptrvet;
  ptrvet = (int*)  malloc(N * sizeof(int));
  if(N <= 0){
   ptrvet = NULL;
  }

  return *ptrvet;
}

int main(){
  int n;
  int Res;
  printf("digite o tamanho do vetor:");
  scanf("%i", &n);

  Res = CriaPonteiro(n);

  printf("%p\n",Res);

return 0;
}
