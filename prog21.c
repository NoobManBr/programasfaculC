/**************************************************************************************************
* Prog21 Lista de exerc�cios - MAYCON BRUNO DE JESUS                                              *
*    Fa�a um programa capaz de identificar se um n�mero � par ou �mpar.                           *
***************************************************************************************************/
#include<stdio.h>

main(){
    int num;

    printf("PAR OU IMPAR\n");
    printf("Digite um n�mero\n");
    scanf("%d", &num);
    if(num%2==0)
        puts("O n�mero � par");

    else
        puts("O n�mero � impar");
}
