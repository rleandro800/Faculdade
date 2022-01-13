# include <stdio.h>
# include <stdlib.h>
# include <string.h>

typedef struct{
  char nome[50];
  char curso[20];
  float nota1;
  float nota2;
  float nota3;
  float nota4;
  float media;
  char situacao[10];
}Aluno;

 int main(){
   Aluno aluno;
   printf("digite o nome do aluno:");
   fgets (aluno.nome,49,stdin);
   setbuf (stdin,NULL);
   printf("digite o nome do curso:");
   fgets (aluno.curso,19,stdin);
  setbuf (stdin,NULL);
   printf("digite a primeira nota:");
   scanf("%f", &aluno.nota1);
   setbuf (stdin,NULL);
   printf("digite a segunda nota:");
   scanf("%f", &aluno.nota2);
   setbuf (stdin,NULL);
   printf("digite a terceira nota:");
   scanf("%f", &aluno.nota3);
   setbuf (stdin,NULL);
   printf("digite a quarta nota:");
   scanf("%f", &aluno.nota4);
   setbuf (stdin,NULL);

   aluno.media = (aluno.nota1 + aluno.nota2 + aluno.nota3 + aluno.nota4) / 4;
   if(aluno.media >= 7){
     strcpy(aluno.situacao,"Aprovado");
   }
   if(aluno.media < 7 && aluno.media >= 3){
     strcpy(aluno.situacao,"de Exame");
   }
   if(aluno.media < 3){
    strcpy(aluno.situacao,"Reprovado");
   }
   printf ("media:%.2f\n", aluno.media);
   printf("O Aluno esta %s\n",aluno.situacao);
 }
