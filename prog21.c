/**************************************************************************************************
* Prog21 Lista de exercícios - MAYCON BRUNO DE JESUS                                              *
*    Faça um programa capaz de identificar se um número é par ou ímpar.                           *
***************************************************************************************************/
#include<stdio.h>

main(){
    int num;

    printf("PAR OU IMPAR\n");
    printf("Digite um número\n");
    scanf("%d", &num);
    if(num%2==0)
        puts("O número é par");

    else
        puts("O número é impar");
}
