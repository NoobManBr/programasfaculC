#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define ANOS 8
#define MESES 12

void menu(){
    puts("1 - O consumo médio do meses");
    puts("2  Mês e ano que teve maior consumo");
}

void gerar(int matriz[ANOS][MESES]){
    int i,j;
    for(i=0; i<ANOS; i++){
        for(j=0; j<MESES; j++){
            matriz[i][j] = rand()%100;
            printf("%d ", matriz[i][j]);
        }
    putchar('\n');
    }
}

void media(int matriz[ANOS][MESES]){
    int i,j;
    float media;
    puts("Qual mês você quer saber a media? 1 - 12");
    scanf("%d", &j);
    for(i=0,j-=1,media=0; i<ANOS; i++)
            media+= matriz[i][j];
    printf("1 - %d", media);
    media/=ANOS;
    printf("A media é %.2f\n", media);
}

void maior(int matriz[ANOS][MESES]){
    int i,j,maior;
    for(i=0, maior=0; i<ANOS; i++)
        for(j=0; j<MESES; j++){
            if(matriz[i][j]>maior)
                maior=matriz[i][j];
        }
    for(i=0; i<ANOS; i++)
        for(j=0; j<MESES; j++)
            if(matriz[i][j]==maior)
                printf("O maior e ANO: %d MÊS: %d = %d\n",i+1,j+1,maior);
}

int main(){
    int matriz[ANOS][MESES];
    int escolha;
    srand(time(0));

    gerar(matriz);
    do{
    menu();
    scanf("%d", &escolha);
    switch(escolha){
        case 1: media(matriz); break;
        case 2: maior(matriz); break;
        case 0: return;
    }
    } while(escolha!=0);
}
