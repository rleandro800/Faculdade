/*
* @file: ex2a14
* @date: 12/08/2021
* @author: Rodrigo Leandro Benedito
* @brief: Aula 14 exercício 2
* 2) Elabore uma função que receba por parâmetro o sexo (caractere) e a
* altura de uma pessoa (real), calcule e retorne seu peso ideal. Para isso,
* utilize as fórmulas a seguir.
* Para homens: (72.7 * altura) - 58
* Para mulheres: (62.1 * altura) - 44.7
*/
#include <stdio.h>
#include <stdlib.h>

int pesoIdeal(char sexo, float altura){
  float pesoI = 0;
  if(sexo == 'M' || sexo == 'm')
    pesoI = (72.7 * altura) - 58;

  if(sexo == 'F' || sexo == 'f')
    pesoI = (62.1 * altura) - 44.7;

  return pesoI;
}//pesoIdeal

int main () {
  char sexo;
  float altura;
  float pesoI;
  do{
    printf("Digite o sexo sendo M para masculino e F para feminino:");
    scanf("%c", &sexo);
    setbuf(stdin, NULL);
    if (sexo != 'F' && sexo !=  'f' && sexo != 'M' && sexo != 'm'){
      printf ("Valor invalido\n");
    }
  }while(sexo != 'F' && sexo != 'f' && sexo != 'M' && sexo != 'm');
  printf("digite sua Altura:");
  scanf("%f", &altura);


  pesoI = pesoIdeal(sexo, altura);

  printf("Seu peso ideal é: %.2f\n", pesoI);

  return 0;
}
