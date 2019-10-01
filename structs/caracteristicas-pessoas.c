/**
 * Programa que faz a leitura de características de um número n de pessoas e mostra características
 * estatísticas sobre elas
 *    Autor: Maycon Bruno de Jesus
 */ 

#include<stdio.h>

#define HABITANTES 3

typedef struct pessoa{
  char sexo;
  int idade;
  float altura;
  char olhos;
} Pessoas;

Pessoas pessoa[HABITANTES];

void entradas();
float media();
int m_idade();
int quant();
float percentual();

int main(){
  entradas();
  
  printf("A média das pessoas com olhos castanhos e altura superior a 1,60m é %f\n", media());
  printf("A maior idade entre os habitantes é %d\n", m_idade());
  printf("A quantidade de indivíduos do sexo feminino com idade entre 20 e 45 anos (inclusive) ou que tenham olhos verdes e altura inferior a 1,70m é %d\n", quant());
  printf("O percentual de homens é igual a %f\n", percentual());
}


void entradas(){
  int i;
  for(i=0;i<HABITANTES;i++){
    puts("Sexo - (M/F)");
    scanf(" %c", &pessoa[i].sexo);
    
    puts("Altura");
    scanf("%f", &pessoa[i].altura);
    
    puts("Idade");
    scanf("%d", &pessoa[i].idade);
    
    puts("Cor dos olhos: A = Azuis V = Verdes C = Castanhos");
    scanf(" %c", &pessoa[i].olhos);
  }
}

float media(){
  float media = 0;
  int i;
  
  for(i=0;i<HABITANTES; i++){
    if(pessoa[i].olhos=='c' || pessoa[i].olhos=='C' && pessoa[i].altura >1.60)
      media+=pessoa[i].idade;
  }

  return media/HABITANTES;
}

int m_idade(){
  int maior=pessoa[0].idade;
  int i;
  
  for(i=0; i<HABITANTES; i++){
    if(pessoa[i].idade>maior)
      maior=pessoa[i].idade;
  }

  return maior;
}

int quant(){
  int cont,i;

  for(i=0,cont=0; i<HABITANTES; i++){
    if((pessoa[i].sexo=='f' || pessoa[i].sexo=='F') || (pessoa[i].olhos=='v' || pessoa[i].olhos=='V' && pessoa[i].altura<1.7))
      cont++;
  }

  return cont;
}

float percentual(){
  int i,cont;

  for(i=0,cont=0; i<HABITANTES; i++)
    if(pessoa[i].sexo=='m' || pessoa[i].sexo=='M')
      cont++;
      
  return cont/HABITANTES;
}
