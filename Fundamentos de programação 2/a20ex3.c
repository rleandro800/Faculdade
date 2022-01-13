#include <stdio.h>
#include <stdlib.h>

int CriaPonteiro(int* vetA[],  int* vetB[]){
  int vetC[4];

  for(int i =0; i < 4; i++){
    vetC[i]=(*vetA[i]) * (*vetB[i]);
  }

}

int main(){
  int vetA[4] = {1,2,3,4};
  int vetB[4] = {5,6,7,8};

  CriaPonteiro(&vetA, &vetB);

}
