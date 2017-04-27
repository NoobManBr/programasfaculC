#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define LINHA1 3
#define COLUNA1 2
#define LINHA2 2
#define COLUNA2 2


void tabela1(int matriz1[LINHA1][COLUNA1]);
void tabela2(int matriz2[LINHA2][COLUNA2]);
int lucro(int matriz1[LINHA1][COLUNA1], int matriz2[LINHA2][COLUNA2]);

int main(){
  int matriz1[LINHA1][COLUNA1], matriz2[LINHA2][COLUNA2];

  //srand(time(0));
  tabela1(matriz1);
  tabela2(matriz2);
  printf("O lucro total é %d \n",lucro_total(matriz1,matriz2));
}

void tabela1(int matriz1[LINHA1][COLUNA1]){
  int i,j;

  puts("Tabela 1");
  printf("Meses   M1      M2\n");
  for(i=0; i<LINHA1; i++){
    printf("%2d -    ", i+1);
    for(j=0; j<COLUNA1; j++){
      matriz1[i][j]=1+rand()%100;
      printf("%2d      ", matriz1[i][j]);
    }
    putchar('\n');
  }
}

void tabela2(int matriz2[LINHA2][COLUNA2]){
  int i,j;

  printf("\nTabela 2\n");
  printf("Motor   Custo     Lucro\nM1");
  for(i=0; i<LINHA2; i++){
    for(j=0; j<COLUNA2; j++){
        matriz2[i][j]=1+rand()%100;
        printf("      %2d   ", matriz2[i][j]);
    }
  printf("\nM2");
  }
}

int lucro_total(int matriz1[LINHA1][COLUNA1], int matriz2[LINHA2][COLUNA2]){
  int i,j,lucro;

  /*printf("MATRIZ CONFERÊNCIA\n");
  for(i=0; i<LINHA1; i++){
    for(j=0; j<COLUNA1; j++){
        printf("      %2d   ", matriz1[i][j]);
    }
  printf("\n");
  }
  putchar('\n');
  for(i=0; i<LINHA2; i++){
    for(j=0; j<COLUNA2; j++){
        printf("      %2d   ", matriz2[i][j]);
    }
  printf("\n");
}*/

  for(i=0,lucro=0; i<LINHA1; i++)
    lucro=lucro + matriz2[0][1] * matriz1[i][0] + matriz2[1][1] * matriz1[i][1];
  return lucro;
}
