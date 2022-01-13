/*
* @file: ex3a13
* @date: 03/08/2021
* @author: Rodrigo Leandro Benedito
* @brief: Aula 13 exercício 3
*  3) Desenvolva um programa que armazene o nome e o
* telefone de 5 pessoas. Ao digitar a posição desejada, o
* programa deve exibir o nome e telefone daquela posição. O
* programa finaliza ao receber a entrada -1.
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () {
  char nomes [5] [31];
  int numeros [5];
  int i;
  int opcao;

  //receber o o nome e o telefone de 5 pessoas
  for(i= 0; i<5; i++){
    printf("digite o nome %i:",i);
    fgets(nomes [i], 30, stdin);
    setbuf(stdin, NULL);
    printf ("Digite o número da pessoa %i:", i);
    scanf("%i", &numeros [i]);
    setbuf(stdin, NULL);
  }
  //exibir o nome e o telefone de acordo com o numero que o usuario digitar
  // fechar o programa de o número que o usuario digitar for = -1
  do{
    printf("Digite o numero desejado:");
    scanf("%i", &i);
    if(i < -1 || i > 4){
      printf("valor invalido");
    }
    if(i > -1 && i < 5){
      printf ("nome %i: %s\n", i, nomes [i]);
      printf ("numero %i: %i\n", i, numeros [i] );
    }

  }while(i!=-1);

  return 0;
}
