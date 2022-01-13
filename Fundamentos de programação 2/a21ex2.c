/*
* @file: a21ex2
* @date: 18/08/2021
* @author: Rodrigo Leandro Benedito
* @brief: Aula 21 exercício 2
* 2) Escreva um programa que leia do usuário os nomes de dois
* arquivos texto. Crie um terceiro arquivo texto com o conteúdo dos
* dois primeiros juntos (o conteúdo do primeiro seguido do conteúdo do
* segundo).
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (){
    char nome1[20];
    char nome2[20];

    //Receber o nome de dois arquivos
    fgets(nome1,19,stdin);
    nome[strcspn(nome1,"\n")]='\0';
    setbuf(stdin,NULL);
    fgets(nome2,19,stdin);
    nome[strcspn(nome2,"\n")]='\0';
    setbuf(stdin,NULL);

    //Criar um arquivo novo
      FILE *arq = fopen("arq3.txt", "w");

    //Juntar o conteudo dos dois arquivos(primeiro depois o segundo) no novo arquivo
    for(int i = 0; i < strlen(nome1[20]); i++){

    }


}
