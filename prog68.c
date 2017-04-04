#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define DIM 4

menu(){
    puts("MENU");
    puts("1 - A quantidade de numeros pares da matriz");
    puts("2 - A soma dos números impares da matriz");
}

int quant_pares(int **matriz){
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
    menu();
    scanf("%d", &escolha);
    switch(escolha){
        case 1: printf("A quantidade de números pares da matriz é %d",quant_pares(matriz));
                break;
        case 2: printf("A soma dos números impares da matriz é %d",soma_imp(matriz));
                break;
    }
}
