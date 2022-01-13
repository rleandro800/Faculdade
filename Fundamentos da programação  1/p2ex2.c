/*
* @file: p2ex2
* @date: 24/08/2021
* @author: Rodrigo Leandro Benedito
* @brief: prova 2 exercício 2 
A comissão organizadora das Olimpíadas de Tokyo 2020 gostou do seu trabalho
na prova anterior e lhe passou mais uma tarefa.

Agora para ajudar no Salto em Distância. Para isso, faça um programa que
armazene os dados de 5 atletas, cada atleta possui nome (20 caracteres), e a
distancia de três saltos (real) e o maior salto (que deverá ser determinado a
partir dos três saltos).
Para isso, faça cada item abaixo em uma função diferente:
a) Faça um programa que receba os dados dos 5 atletas: nome(strings) e 3 saltos
 ( matriz 5x4 - valores entre 2 e 10 metros inclusive). Solicite novos valores
  caso o usuário digite fora da faixa permitida.
b) Calcule o maior salto de cada atleta, utilizando um laço for, e salve na
última coluna da matriz dos saltos;
c) Exiba em formato de tabela (alinhada) os nomes, e o maior salto de todos
os atletas que saltaram 5 metros ou mais ( com duas casas decimais).
d) Utilizando laços de repetição, calcule e exiba a média dos maiores saltos
 dos 5 atletas.
e) Exiba o nome do atleta e a distancia do melhor salto do atleta que saltou
a menor distância (duas casas decimais).
f) Receba um nome de atleta e busque ele na lista, exibindo os 3 saltos desse
atleta e o valor do seu maior salto (apenas 1 vez). Exiba uma mensagem
informando também caso não encontre o nome buscado.

Obs.:

Os itens devem ser executados sequencialmente
Para obtenção da nota máxima, faça a leitura inicial e cada item, de A a F,
em uma função separada.
Bônus do professor maluco: Escolha, obrigatoriamente, um dos itens de "C" a "F"
 para ser eliminado da questão, indique o item descartado com um comentário em seu código
*/
#include <stdio.h>
#include <stdlib.h>

int main () {
  //decarar as variaveis
  float saltos [5] [4];
  char nomeAtleta [5] [21];
  //receber dados de 5 atletas contendo 3 pulos de cada atleta e o nome desse atleta
  for(i=0;i<5;i++){
    for(j=0;j<3;j++){
      scanf("%f", &saltos [i] [j])
    }
  }
  for(i=0; i<5; i++){
    fgets(nomeAtleta, 20, stdin);
    nomeAtleta [i] [strcspn(nomeAtleta [i],"\n")]= '\0';
    setbuf(stdin,NULL);
  }
  //comparar se os valores recebidos estão entre 2  10 metros
  //calcular qual o valor do maior salto de cada atleta salvar nas ultimas casas da matriz
  for(i=0;i<5;i++){
    for(j=0;j<3;j++){
      if(salto [i] [j] > salto [i] [j+1]){
        salto [i] [3] = salto [i] [j]
      }
    }
  }
  //verificar se o maior salto do atleta foi maior que 5m
  //se for exibir o nome do atleta e o valor do maior salto com 2 casa decimais
  for(i=0;i<5;i++){
    printf("nome do atleta:%s", nomeAlteta [i]);
    printf("salto mais alto: %.2f", saltos [i] [3]);
  }
  //calcular e exibir a media dos maiores saltos de todos os atletas
  //descobrir o maior salto de todos exibor o nome do atleta e o valor desse salto com duas casa decinmais
  //eliminei a letra F
  return 0;
}
