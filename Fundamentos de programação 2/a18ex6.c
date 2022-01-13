#include <stdio.h>
#include <stdlib.h>


 int funcaox(int a){
 if(a <= 0) return 0;
 else return a + funcaox(a-1);
}//funcaox

int main(){
  int a;
  int resultado;
  printf ("Digite um valor:");
  scanf ("%i",&a);
  resultado = funcaox(a);
  printf("resultado:%i\n");
  
}
