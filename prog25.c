/**************************************************************************************************
* Prog25 Lista de exerc�cios - MAYCON BRUNO DE JESUS                                              *
*   Fa�a um programa que leia 10 n�meros digitados pelo usu�rio e retorne a soma e a m�dia desses *
*   valores.                                                                                      *
***************************************************************************************************/
#include<stdio.h>

main(){
    int i, soma, num;
    float media;

    for(i=1, soma=0; i<=10;i++){
        printf("Digite o %d�numero\n", i);
        scanf("%d", &num);
        soma = soma + num;
    }
    media = (float)soma/10;
    printf("Soma = %d\nM�dia = %.2f\n", soma, media);
}
