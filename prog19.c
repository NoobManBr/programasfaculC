/**************************************************************************************************
* Prog19 Lista de exercícios - MAYCON BRUNO DE JESUS                                              *
*    Faça um programa que leia 3 números e determine quantos são iguais.                          *
***************************************************************************************************/
#include<stdio.h>

main(){
    int x,y,z;

    printf("IGUAIS\n");
    printf("Digite três números\n");
    scanf("%d%d%d", &x,&y,&z);
    if(x==y && x==z)
        puts("Existem três númneros iguais");
    else if(x==y || x==z || y==z)
        puts("Existem dois númneros iguais");
    else
        puts("Existem zero números iguais\n");

}
