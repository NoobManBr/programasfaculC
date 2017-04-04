/**************************************************************************************************
* Prog25 Lista de exercícios - MAYCON BRUNO DE JESUS                                              *
*   Faça um programa que leia 10 números digitados pelo usuário e retorne a soma e a média desses *
*   valores.                                                                                      *
***************************************************************************************************/
#include<stdio.h>

main(){
    int i, soma, num;
    float media;

    for(i=1, soma=0; i<=10;i++){
        printf("Digite o %dºnumero\n", i);
        scanf("%d", &num);
        soma = soma + num;
    }
    media = (float)soma/10;
    printf("Soma = %d\nMédia = %.2f\n", soma, media);
}
