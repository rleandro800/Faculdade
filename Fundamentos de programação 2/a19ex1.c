#include <stdio.h>
#include <stdlib.h>

int main(){
  int var1 = 1;
  int var2 = 3;
  int *ptr1 = &var1;
  int *ptr2 =&var2;

  if(ptr1 > ptr2){
    printf("conteudo:%i\n", *ptr1);
    printf("endereco de memoria:%p\n",ptr1);
  }else{
    printf("conteudo:%i\n", *ptr2);
    printf("endereco de memoria:%p\n",ptr2);
  }//if-else
  return 0;
}//main
