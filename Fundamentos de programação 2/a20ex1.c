# include <stdio.h>
# include <stdlib.h>

int main(){
  int tam;
  printf("Digite o tamanho do vetor:");
  scanf("%i",&tam);
  int vet[tam];
  int *ptr;
  ptr = (int*)  malloc(tam * sizeof(int));

  for(int i = 0; i< tam; i++){
    printf("digite o valor %i:", i+1);
    scanf("%i", &vet[i]);
  }
  printf("\n");

  for(int i = 0; i< tam; i++){
    printf("Valor %i:%i\n", i+1,vet[i]);
  }
  free(ptr);
  return 0;
}
