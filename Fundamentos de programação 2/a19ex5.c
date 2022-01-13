#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void ComparaString(char stg1[], char stg2[]){
  char *ptrstg1 = &stg1[0];
  char *ptrstg2 = &stg2[0];
  int j = 0;
  ptrstg1--;

  for (int i = 0; i < 25; i++){
    if(j == 25){
      break;
    }
    ptrstg1++;
    if(*ptrstg1 == *ptrstg2){

      for (j = 1; j < 25; j++){
        ptrstg1++;
        ptrstg2++;
        if (*ptrstg1 != *ptrstg2 && *ptrstg2 != '\0'){
          ptrstg2 = ptrstg2 -j;
          j = 1;
          break;
        }//if
      }//forJ
    }//if
  }//forI
  if(j==25){
    printf("A segunda string esta dentro da primeira\n");
  }else{
    printf("A segunda string nao esta dentro da primeira\n");
  }
}//compararaString

int main(){
char frase1 [25] = "Amo Batata";
char frase2 [25] = "Batata";

ComparaString(frase1,frase2);

return 0;
}
