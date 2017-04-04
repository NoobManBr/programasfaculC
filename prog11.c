/**************************************************************************************************
* Prog11 Lista de exercícios - MAYCON BRUNO DE JESUS                                              *
*   Faça um programa que calcula a média de quatro números introduzidos pelo usuário.             *
***************************************************************************************************/
#include<stdio.h>

main(){
    float a,b,c,d,media;

    puts("Digite o primeiro número");
    scanf("%f", &a);
    puts("Digite o segundo número");
    scanf("%f", &b);
    puts("Digite o terceiro número");
    scanf("%f", &c);
    puts("Digite o quarto número");
    scanf("%f", &d);
    media = (a+b+c+d)/4;
    printf("A média é %.2f", media);
}
