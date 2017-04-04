/**************************************************************************************************
* Prog26 Lista de exercícios - MAYCON BRUNO DE JESUS                                              *
*   Altere o programa anterior, de tal maneira que o usuário informe a quantidade de números que  *
*   serão digitados (ou seja, o valor “10” não deve ser fixo no programa).                        *
***************************************************************************************************/
#include<stdio.h>

main(){
    int i, soma, n, num;
    float media;

    scanf("%d", &n);
    for(i=1, soma=0; i<=n;i++){
        printf("Digite o %dºnumero\n", i);
        scanf("%d", &num);
        soma = soma + num;
    }
    media = (float)soma/n;
    printf("Soma = %d\nMédia = %.2f\n", soma, media);
}
