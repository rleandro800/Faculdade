# include <stdio.h>
# include <stdlib.h>

//criar struct atleta com: nome do atleta, seu esporte, idade e altura.
//receber os dados de 5 atletas.
int main(){
  typedef struct {
    char nome[31];
    char esporte[21];
    int idade;
    float altura;
  }DadosAtleta;

  DadosAtleta altetas[5];

  for (size_t i = 0; i < 5; i++) {
    printf("digite o nome do atleta %i:\n",i );
    fgets(altetas.nome[i],30,stdin);
    setbuf(stdin,NULL);
    printf("digite o nome do esporte do alteta %i:", i);
    fgets(altetas.esporte[i],20,stdin);
    setbuf(stdin,NULL);
    printf("digite a idade do alteta %i:");
    scanf("%f", &altetas.idade[i]);
    printf("digite a altura do altleta %i:");
    scanf("%f", &altetas.altura[i]);
  }

}
//decubrir o atleta mais alto e do altleta mais velho.
//exibir alteta mais velho e o mais alto.
