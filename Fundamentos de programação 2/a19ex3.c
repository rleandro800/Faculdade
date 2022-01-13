#include <stdio.h>
#include <stdlib.h>

int main(){
  float mat [3][3];

  for(int i=0; i < 3; i++){
    for(int j=0; j < 3; j++){
      printf("endereco %i,%i:%p\n",i+1,j+1,&mat[i][j]);
    }//for
  }//for
  return 0;
}//main
