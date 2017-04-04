/**************************************************************************************************
* Prog16 Lista de exercícios - MAYCON BRUNO DE JESUS                                              *
*   Faça um programa que leia a idade de uma pessoa e diga-lhe se é maior de idade ou não         *
*   (idade >=18).                                                                                 *
***************************************************************************************************/
#include<stdio.h>

main(){
    int idade;
    puts("IDADE");
    puts("Digite sua idade");
    scanf("%d", &idade);
    if(idade>=18)
        puts("Você é maior de idade");
    else
        puts("Você é menor de idade");
}
