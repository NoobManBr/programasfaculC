#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define DIM 4

void menu(){
    puts("MENU");
    puts("1 - A quantidade de numeros pares da matriz");
    puts("2 - A soma dos números impares da matriz");
    puts("3 - A quantidade de números com valor maior que a média da matriz");
    puts("4 - O maior valor da matriz");
    puts("5 - O segundo maior valor da matriz");
    puts("6 - Eliminar números repetidos");
    puts("0 - Sair");
}

int quant_pares(int matriz[DIM][DIM]){
    int i,j,cont;
    for(i=0,cont=0; i<DIM; i++)
        for(j=0; j<DIM; j++){
            if(matriz[i][j]%2==0)
                cont++;
        }
    return cont;
}

int soma_imp(int matriz[DIM][DIM]){
    int i,j,soma;
    for(i=0,soma=0; i<DIM; i++)
        for(j=0; j<DIM; j++){
            if(matriz[i][j]%2!=0)
                soma+=matriz[i][j];
        }
    return soma;
}

int maior_media(int matriz[DIM][DIM]){
  int i,j,soma,divi,cont;
  float media;
  divi = DIM*DIM;
  for(i=0,soma=0; i<DIM; i++)
    for(j=0; j<DIM; j++)
        soma+=matriz[i][j];
  media = (float)(soma/divi);
  for(i=0,cont=0,soma=0; i<DIM; i++)
    for(j=0; j<DIM; j++){
        if(matriz[i][j]>media)
          cont++;
    }
          return cont;
}

int maior(int matriz[DIM][DIM]){
  int i,j,maior;
  j=0;
  for(i=0,maior=matriz[i][j]; i<DIM; i++)
      for(j=0; j<DIM; j++){
        if(matriz[i][j+1]>maior)
          maior = matriz[i][j+1];
      }
  return maior;
}

int seg_maior(int matriz[DIM][DIM]){
  int i,j,maiornum;
  j=0;
  maiornum = maior(matriz);
      for(i=0; i<DIM; i++){
          for(j=0; j<DIM; j++)
            if(matriz[i][j]==maiornum)
              matriz[i][j]=0;
    }
    for(i=0,maiornum=matriz[i][j]; i<DIM; i++)
          for(j=0; j<DIM; j++){
            if(matriz[i][j+1]>maiornum)
              maiornum = matriz[i][j+1];
          }
  return maiornum;
}

void eliminar(int matriz[DIM][DIM]){
  int i,j,a,b;
  for(i=0,a=0; i<DIM; i++)
    for(j=i+1,b=0; j<DIM; j++){
      if(matriz[a][b]==matriz[i][j])
        matriz[i][j] = 50;
    }
    puts("Nova matriz");
    for(i=0; i<DIM; i++){
        for(j=0; j<DIM; j++)
            printf("%d ", matriz[i][j]);
    putchar('\n');
    }
}


int main(){
    int matriz[DIM][DIM];
    int escolha,i,j;
    srand(time(0));
    for(i=0; i<DIM; i++)
        for(j=0; j<DIM; j++)
            matriz[i][j] = rand()%10;
    puts("MATRIZ ORIGINAL");
    for(i=0; i<DIM; i++){
        for(j=0; j<DIM; j++)
            printf("%d ", matriz[i][j]);
    putchar('\n');
    }
    do{
    menu();
    scanf("%d", &escolha);
    switch(escolha){

        case 1: printf("A quantidade de números pares da matriz é %d",quant_pares(matriz)); break;
        case 2: printf("A soma dos números impares da matriz é %d",soma_imp(matriz)); break;
        case 3: printf("A quantidade de números com valor maior que a média da matriz é %d\n", maior_media(matriz)); break;
        case 4: printf("O maior valor da matriz é %d\n", maior(matriz)); break;
        case 5: printf("O segundo maior valor da matriz é %d\n", seg_maior(matriz)); break;
        case 6: eliminar(matriz); break;
        case 7: break;
    }
  } while(escolha != 0);
}
