/**************************************************************************************************
* Prog8 Lista de exercícios - MAYCON BRUNO DE JESUS                                               *
*    Faça um programa que recebe dois valores na variáveis A e B e, em seguida, troca o conteúdo  *
*     destas variáveis. Por exemplo, se o usuário digitar A=5 e B=3, o programa deverá trocar os  *
*     valores de tal maneira que A seja igual a 3 e B igual a 5.                                  *
***************************************************************************************************/
#include<stdio.h>

main(){
    int a,b,aux;

    puts("INVERSOR DE VALORES");
    printf("Digite o 1º número\n");
    scanf("%d", &a);
    printf("Digite o 2º número\n");
    scanf("%d", &b);
    aux=a;
    a=b;
    b=aux;
    printf("%d\t%d",a,b);
}
