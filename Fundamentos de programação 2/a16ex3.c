/*
* @file: a16ex3
* @date: 13/10/2021
* @author: Rodrigo leandro Benedito
* @brief: Aula 16 exercicio 3
*/
#include <stdio.h>
#include <stdlib.h>

float CalculaNota(char opcao,float nota1, float nota2, float nota3){
  float resultado;
  switch (opcao) {
    case 'A':
    resultado = (nota1 + nota2 + nota3) / 3;
    case 'P':
    resultado = ((nota1 * 5) + (nota2 * 3) + (nota3 * 2)) / 3;
    case 'S':
    resultado = nota1 + nota2 + nota3;
  }//switch
  return resultado;
}//CalculaNota

int main(){
  float Nota1, Nota2, Nota3;
  char Opcao;
  printf ("Digite:\n");
  printf ("A- Media Aritimetica\n");
  printf ("P- Media Ponderada\n");
  printf ("S- Soma\n");
  scanf ("%c", &Opcao);
  printf("Digite a nota 1:\n");
  scanf ("%f", &Nota1);
  printf("Digite a nota 2:\n");
  scanf ("%f", &Nota2);
  printf("Digite a nota 3:\n");
  scanf ("%f", &Nota3);

  float Resultado = CalculaNota(Opcao, Nota1, Nota2, Nota3);
  printf("Resultado:%.2f\n", Resultado);

}
