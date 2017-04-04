/**************************************************************************************************
* Prog22 Lista de exercícios - MAYCON BRUNO DE JESUS                                              *
*    Faça um programa capaz de identificar se um número é positivo, negativo ou zero              *
***************************************************************************************************/
#include<stdio.h>

main(){
    int num;

    printf("Digite um número\n");
    scanf("%d", &num);
    if(num>0)
        printf("O número é positivo\n");
    if(num<0)
        printf("O número é negativo\n");
    else
        printf("O número é 0\n");
}
