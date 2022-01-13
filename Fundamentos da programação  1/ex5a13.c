/*
* @file: ex5a13
* @date: 04/08/2021
* @author: Rodrigo Leandro Benedito
* @brief: Aula 13 exercício 5
* 5) Faça um programa que receba uma frase e depois exiba quantas vezes
* cada vogal aparece. Ele deve contar considerando o tamanho da String.
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () {

  char frase [31];
  int a=0;
  int e=0;
  int i=0;
  int o=0;
  int u=0;
  int c;
  int tamanho;
  //receber um nome
  printf("digite um nome:");
  fgets(frase, 30, stdin);
  tamanho = strlen(frase);
  setbuf(stdin,NULL);

  //contar quantas vogais de cada uma tem nesse nome
  for(c=0;c<tamanho;c++){
    if(frase [c] == 'a'){
      a++;
    }
    if(frase [c] == 'e'){
      e++;
    }
    if(frase [c] == 'i'){
      i++;
    }
    if(frase [c] == 'o'){
      o++;
    }
    if(frase [c] == 'u'){
      u++;
    }
  }

  //exibir quantas vogais de cada comtem o nome digitado
  printf("a:%i\n", a);
  printf("e:%i\n", e);
  printf("i:%i\n", i);
  printf("o:%i\n", o);
  printf("u:%i\n", u);

  return 0;
}
