/*
* @file: ex1a5
* @date: 24/08/2021
* @author: Rodrigo Leandro Benedito
* @brief: Aula 5 exercício 1
Faça um programa que receba duas frases com o tamanho máximo de 30 caracteres
cada.

Se Frase1 e Frase2 tiverem o mesmo tamanho, o programa deverá criar uma NOVA
string Frase3, contendo a primeira e segunda frases intercaladas.
Exemplo:
Frase1: BRASIL
Frase2: parana
Frase3: BpRaArSaInLa


 Se Frase1 e Frase2 tiverem tamanhos diferentes, deve-se gerar uma NOVA string
 Frase3, que é o resultado da concatenação de Frase1 com Frase2 com um caractere
 de espaço entre elas.

Exemplo:
Frase1: BRASIL
Frase2: UTFPR
Frase3: BRASIL UTFPR

Obs.: Em nenhum dos casos as strings com as Frases iniciais devem ser
modificadas.
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () {
  //declarar as variáveis
  char frase1 [31];
  char frase2 [31];
  char frase3 [61];
  int tamanhof1;
  int tamanhof2;
  int tamanhot;
  int i;
  int j;
  int b;
  int d;
  //receber duas frases (no maximo 30 caracteres)
  printf("Digite uma frase:");
  fgets (frase1, 30, stdin);
  frase1 [strcspn(frase1,"\n")]= '\0';
  setbuf(stdin,NULL);
  printf("Digite outra frase:");
  fgets (frase2, 30, stdin);
  frase2 [strcspn(frase2,"\n")]= '\0';
  setbuf(stdin,NULL);
  //descobrir o tamnho de cada frase
  tamanhof1 = strlen(frase1);
  tamanhof2 = strlen(frase2);
  tamanhot = tamanhof1 + tamanhof2;
  if(tamanhof1 == tamanhof2){
    for(i=0,b=0;i==tamanhof1,b >= tamanhot;i++,b=b+2){
      frase3 [b] = frase1 [i];

    }
    for(j=0,d=1;j==tamanhof2,d >= tamanhot;j++, d=d+2){
      frase3 [d] = frase2 [j];
    }
  }else{
    strcpy (frase3,frase1);
    strcat (frase3,frase2);
  }


  //conferir se a frase 1 e a frase 2 tem o mesmo tamanho
  //se tiverem o mesmo tamanho concatene em uma nova string as duas frases
  // entercalando as letras
  //se tiverem tamanhos diferentes comcatene em uma nova string frase 1
  //seguida da frase 2
  //exibir a frase
  printf("%s", frase3);
  return 0;
}
