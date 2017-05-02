#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define NUMS 49
#define MIN_APOSTA 6
#define NUM_LIN 7

void Inic_Random();
void Inic(int v[NUMS]);
int Ler_Ns_Apostar();
void Gerar(int *v, int n);
void Apresentar(int res[]);

int main(){
    int vetor[NUMS];
    int n_nums;

    Inic_Random();
    while(1){
        Inic(vetor);
        if((n_num=Ler_Ns_Apostar())==0)
            break;
    Gerar(vetor,n_nums);
    Apresentar(vetor);
    }
}

void Inic_Random(){
    long ultime;
    time(&ultime);
    srand((unsigned)ultime);
}

void Inic(int v[]){
    int i;

    for(i=0; i<NUMS; i++)
        v[i]=0;
}

int Ler_Ns_Apostar()
