/**************************************************************************************************
* Prog19 Lista de exerc�cios - MAYCON BRUNO DE JESUS                                              *
*    Fa�a um programa que leia 3 n�meros e determine quantos s�o iguais.                          *
***************************************************************************************************/
#include<stdio.h>

main(){
    int x,y,z;

    printf("IGUAIS\n");
    printf("Digite tr�s n�meros\n");
    scanf("%d%d%d", &x,&y,&z);
    if(x==y && x==z)
        puts("Existem tr�s n�mneros iguais");
    else if(x==y || x==z || y==z)
        puts("Existem dois n�mneros iguais");
    else
        puts("Existem zero n�meros iguais\n");

}
