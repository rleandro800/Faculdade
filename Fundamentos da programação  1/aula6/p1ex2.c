/*
* @file: ex1a5
* @date: 05/07/2021
* @author: Rodrigo Leandro Benedito
* @brief: Aula 5 exerc�cio 1
* Voc� foi convocado para trabalhar como programador nas
* Olimp�adas de Tokyo. Seu trabalho � gerar um relat�rio sobre as medalhas
* distribu�das.Para isso, fa�a um programa que receba a quantidade de medalhas
* de ouro, prata e bronze de diversos pa�ses.
* Ap�s digitar os dados de cada pa�s, o programa deve perguntar se
* o usu�rio deseja digitar os dados de um novo pa�s.
* O programa deve continuar recebendo dados se o usu�rio entrar a letra s
* (de sim) ou finalizar ao receber qualquer outro valor.
* Ao finalizar o programa deve exibir:
* a) A quantidade de pa�ses que foram informados
* b) A soma de todas as medalhas de ouro, prata e bronze (separadamente);
* c) A quantidade de pa�ses que n�o receberam nenhuma medalha.
*/
#include <stdio.h>
#include <stdlib.h>

int main () {

  //declarar as vari�veis
  int medalhaouro;
  int acumulaouro = 0;
  int medalhaprata;
  int acumulaprata = 0;
  int medalhabronze;
  int acumulabronze = 0;
  char opcao;
  int paisSM = 0;
  int totalpais;
  int numeropais = 1;
  //receber a quantidade de medalhas de cada tipo foi recebida por um pais
  do{
    printf ("Olimpiadas de Tokyo - Pa�s %i\n", numeropais);
    printf ("digite a quantidade de medalhas de ouro:");
    scanf ("%i", &medalhaouro);
    printf ("digite a quantidade de medalhas de prata:");
    scanf ("%i", &medalhaprata);
    printf ("digite a quantidade de medalhas de bronze:");
    scanf ("%i", &medalhabronze);
    getchar ();
    if(medalhaouro == 0 && medalhaprata == 0 && medalhabronze == 0){
      paisSM ++;
    }
    acumulaouro = medalhaouro + acumulaouro;
    acumulaprata = medalhaprata + acumulaprata;
    acumulabronze = medalhabronze + acumulabronze;
    numeropais ++;

    printf ("deseja entrar com outro pa�s:");
    scanf ("%c", &opcao);
    printf ("\n");
  }while(opcao == 's' || opcao == 'S');
  numeropais--;
  //calcular o total de cada tipo de medalhas recebidos por todos os paises
  //exibir quantos pa�s foram informados
  printf ("%i pa�ses foram informados\n", numeropais);
  printf ("%i medalhas de ouro foram distribuidas\n", acumulaouro);
  printf ("%i medalhas de prata foram distribuidas\n", acumulaprata);
  printf ("%i medalhas de bronze foram distribuidas\n", acumulabronze);
  //exibir quantos paises n�o recebera, medalhas
  printf ("%i pa�ses n�o conseguiram nenhuma medalha\n", paisSM);

  return 0;

}
