/**************************************************************************************************
* Prog26 Lista de exerc�cios - MAYCON BRUNO DE JESUS                                              *
*   Altere o programa anterior, de tal maneira que o usu�rio informe a quantidade de n�meros que  *
*   ser�o digitados (ou seja, o valor �10� n�o deve ser fixo no programa).                        *
***************************************************************************************************/
#include<stdio.h>

main(){
    int i, soma, n, num;
    float media;

    scanf("%d", &n);
    for(i=1, soma=0; i<=n;i++){
        printf("Digite o %d�numero\n", i);
        scanf("%d", &num);
        soma = soma + num;
    }
    media = (float)soma/n;
    printf("Soma = %d\nM�dia = %.2f\n", soma, media);
}
