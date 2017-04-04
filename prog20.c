/**************************************************************************************************
* Prog20 Lista de exercícios - MAYCON BRUNO DE JESUS                                              *
*    Faça um programa capaz de identificar se um número é igual a 1, 5 ou 10. Caso não seja       *
*    nenhum desses valores, retornar a mensagem “Valor inválido”.                                 *
***************************************************************************************************/
#include<stdio.h>

main(){
    int num;

    printf("ACERTA MISERAVI!\n");
    printf("Digita um número miseravi\n");
    scanf("%d", &num);
    if(num==1 || num==5 || num==10)
        printf("Acertó Miseravi\n");
    else
        printf("Valor inválido\n");
}
