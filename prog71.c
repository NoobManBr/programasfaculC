#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define LINHA 5
#define COLUNA 5

int main(){
    int matriz[LINHA][COLUNA];
    int vet1[25], vet2[25];
    int i,j,maior;
    srand(time(0));

    for(i=0; i<LINHA; i++){
        for(j=0; j<COLUNA; j++){
            matriz[i][j]=rand()%10;
            printf("%d ", matriz[i][j]);
        }
        putchar('\n');
    }

    for(j=0, maior=matriz[0][0]; j<COLUNA; j++){
        for(i=0; i<LINHA; i++){
            if(matriz[i][j]>maior)
                maior=matriz[i][j];
            if(i==4){
                vet1[j]=maior;
                maior=matriz[0][j+1];
            }
        }
    }
    putchar('\n');
    for(i=0; i<COLUNA; i++)
        printf("%d ", vet1[i]);
}
