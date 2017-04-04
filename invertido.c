/**************************************************************************************************
* Prog12 Lista de exercícios - MAYCON BRUNO DE JESUS                                              *
*   Faça um programa que leia um número inteiro de 4 dígitos e escreva-o invertido. Por exemplo,  *
*   se o número lido for 2548, o resultado será 8452. Dica: utilize o comando % que retorna       *
*   resto da divisão entre 2 números inteiros.                                                    *
***************************************************************************************************/
#include<stdio.h>

main(){
    int num;

    printf("INVERSOR DE NÚMEROS 4 DÍGITOS\n");
    printf("Digite um número de 4 dígitos\n");
    scanf("%d", &num);
    printf("%d", num%10);
    num = num/10;
    printf("%d", num%10);
    num = num/10;
    printf("%d", num%10);
    num = num/10;
    printf("%d", num%10);
}
