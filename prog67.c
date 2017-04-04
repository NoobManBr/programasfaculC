#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define DIM 3

void gerar(int matriz[DIM][DIM]){
    int i,j;
    for(i=0; i<DIM; i++){
        for(j=0; j<DIM; j++)
            matriz[i][j] = rand()%10;
    }
    for(i=0; i<DIM; i++){
        for(j=0; j<DIM; j++)
            printf("%d ", matriz[i][j]);
    putchar('\n');
    }
    putchar('\n');
}

void soma_matriz(int matrizA[DIM][DIM], int matrizB[DIM][DIM]){
    int i,j;
    int matrizC[DIM][DIM];

    for(i=0; i<DIM; i++){
        for(j=0; j<DIM; j++)
            matrizC[i][j] = matrizA[i][j] + matrizB[i][j];
     }
     for(i=0; i<DIM; i++){
        for(j=0; j<DIM; j++)
            printf("%d ", matrizC[i][j]);
    putchar('\n');
    }
}

int main(){
    int i,j;
    int matrizA[DIM][DIM];
    int matrizB[DIM][DIM];
    srand(time(0));
    gerar(matrizA);
    gerar(matrizB);
    soma_matriz(matrizA,matrizB);
}
