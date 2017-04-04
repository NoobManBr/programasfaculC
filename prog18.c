/**************************************************************************************************
* Prog18 Lista de exercícios - MAYCON BRUNO DE JESUS                                              *
*    Faça um programa que leia dois números inteiros e determine qual dos dois é maior.           *
*    Considere que os dois números podem ser iguais. Neste caso, o programa deve escrever uma     *
*    mensagem para o usuário informando-o de que deve entrar com números diferentes.              *
***************************************************************************************************/
#include<stdio.h>

main(){
    int x,y;

    printf("MAIOR NÚMERO\n");
    printf("Digite o primeiro número\n");
    scanf("%d", &x);
    printf("Digite o segundo número\n");
    scanf(" %d", &y);
    while(x==y){
        printf("Os números são iguais\n");
        printf("Digite novos números\n");
        printf("Digite o primeiro número\n");
        scanf("%d", &x);
        printf("Digite o segundo número\n");
        scanf(" %d", &y);
    }
    if(x>y)
        printf("%d é maior do que %d\n", x,y);
    if(x<y)
        printf("%d é menor do que %d\n", x,y);
}
