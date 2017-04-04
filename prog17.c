/**************************************************************************************************
* Prog17 Lista de exercícios - MAYCON BRUNO DE JESUS                                              *
*   Faça um programa que leia dois números inteiros e determine qual dos dois é maior. Considere  *
*    que os dois números serão diferentes.                                                        *
***************************************************************************************************/
#include<stdio.h>

main(){
    int num1,num2;

    puts("MAIOR NÚMERO");
    puts("Digite o primeiro número");
    scanf("%d", &num1);
    puts("Digite o segundo número");
    scanf("%d", &num2);
    if(num1>num2)
        printf("O %d é maior que o %d", num1,num2);
    else
        printf("O %d é menor que o %d", num1,num2);
}
