/**************************************************************************************************
* Prog62 Lista de exercícios - MAYCON BRUNO DE JESUS                                              *
*    Escreva um programa para armazenar 15 números inteiros em um vetor. Os números deverão ser   *
*    gerados aleatoriamente. O vetor deverá ser uma variável local dentro da função “main”. Em    *
*    seguida, implemente funções que recebem o vetor como parâmetro e retornam:                   *
***************************************************************************************************/
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

#define TAM 5

void exibir(int vet[TAM]){
  int i;
  for(i=0; i<TAM; i++)
    printf("%d ", vet[i]);
    putchar('\n');
}

void gerar(int vet[TAM]){
  int i;
  for(i=0; i<TAM;i++)
      vet[i] = 1 + rand()%TAM;
  puts("Esse é seu vetor");
  exibir(vet);
}

int pares(int vet[TAM]){
    int i,cont;

    for(i=0,cont=0; i<TAM; i++){
        if(vet[i]%2==0)
            cont++;
    }
    printf("A quantidade de números pares é %d\n", cont);
}

int soma_impares(int vet[TAM]){
    int i,soma;

    for(i=0,soma=0; i<TAM; i++){
        if(vet[i]%2!=0)
            soma+=vet[i];
    }
    printf("A soma dos números impares é %d\n", soma);
}

int media(int vet[TAM]){
    int i,cont;
    float media;

    for(i=0,media=0.0; i<TAM; i++){
        media+=vet[i];
    }
    media/=15;
    for(i=0,cont=0; i<TAM; i++){
        if(vet[i]>media)
        cont++;
    }
    printf("Existem %d números acima da média\n", cont);
}

int maior(int vet[TAM]){
    int i,maior;

    for(i=0,maior=0; i<TAM; i++){
        if(vet[i]>maior)
            maior=vet[i];
    }
    printf("O maior valor do vetor é %d\n", maior);
}

int v_cons(int vet[TAM]){
    int i=0;
    int m_int = abs(vet[i]-vet[i+1]);
    for(i=1; i<TAM; i++){
        if(abs(vet[i]-vet[i+1])>m_int)
            m_int=abs(vet[i]-vet[i+1]);
    }
    printf("A maior diferença em valor absoluto é %d\n", m_int);
}

void ordenar(int vet[TAM]){
    int i,j,aux;

    for(i=0; i<TAM; i++){
        for(j=0; j<TAM; j++){
            if(vet[i]<vet[j]){
                aux=vet[i];
                vet[i]=vet[j];
                vet[j]=aux;
            }
        }
    }
    exibir(vet);
}

void ter_maior(int vet[TAM]){
    int i,cont,aux;

     ordenar(vet);
      for(i=0,cont=1; i<TAM; i++){
        if(vet[i+1]>vet[i])
          cont++;
      if(cont==3){
        printf("O terceiro maior é %d\n", vet[i+1]);
        break;
      }
    }
}

void subs(int vet[TAM]){
  int i,a;

  exibir(vet);
  for(a=0; a<TAM; a++){
    for(i=a+1; i<TAM; i++){
      if(vet[a]==vet[i])
        vet[i] = 1 + rand()%TAM;
    }
  }
  exibir(vet);
}

void menu(int vet[TAM]){
  int escolha,i,ver=0;
  do{
  puts("MENU");
  puts("1 - Quantidade de números pares do vetor");
  puts("2 - A soma dos números impares do vetor");
  puts("3 - A quantidade de números com valor maior do que a média dos números do vetor");
  puts("4 - O maior valor do vetor");
  puts("5 - A maior diferença em valor absoluto entre os elementos consecutivos do vetor");
  puts("6 - Exibir o 3º maior valor do vetor");
  puts("7 - Ordenar o vetor");
  puts("8 - Eliminar números repetidos do vetor");
  puts("9 - Sair");
  scanf("%d", &escolha);
  switch(escolha){
    case 1: pares(vet); break;
    case 2: soma_impares(vet);  break;
    case 3: media(vet);  break;
    case 4: maior(vet);  break;
    case 5: v_cons(vet);  break;
    case 6: ter_maior(vet); break;
    case 7: exibir(vet);
            ordenar(vet);
            break;
    case 8: subs(vet);
    case 9: break;
  }
  } while(escolha!=9);
}

int main(){
    int vet[TAM];
    srand(time(0));

    gerar(vet);
    menu(vet);
}
