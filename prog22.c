/**************************************************************************************************
* Prog22 Lista de exerc�cios - MAYCON BRUNO DE JESUS                                              *
*    Fa�a um programa capaz de identificar se um n�mero � positivo, negativo ou zero              *
***************************************************************************************************/
#include<stdio.h>

main(){
    int num;

    printf("Digite um n�mero\n");
    scanf("%d", &num);
    if(num>0)
        printf("O n�mero � positivo\n");
    if(num<0)
        printf("O n�mero � negativo\n");
    else
        printf("O n�mero � 0\n");
}
