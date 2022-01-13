# include <stdio.h>
# include <stdlib.h>

typedef struct {
  char nome[50];
  int idade;
  float peso;
  int dataNascimento[3];
  char nacionalidade[20];
  typedef union{
    int CPF;
    int Passaporte;
  } documento;
}Cadastro;

int main(){
  Cadastro pessoa1
}
