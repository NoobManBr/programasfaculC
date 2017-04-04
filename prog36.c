/**************************************************************************************************
* Prog36 Lista de exercícios - MAYCON BRUNO DE JESUS                                              *
*    Faça um programa usando o comando “for” para calcular o seguinte somatório:                  *
*    n                                                                                            *
*    ∑(5*i+2)                                                                                     *
*    i=3            em que “n” é definido pelo usuário                                            *
***************************************************************************************************/
#include<stdio.h>

main(){
    int n,i,soma;

    puts("SOMÁTORIO");
    puts("Digite o valor de N");
    do{
    scanf("%d", &n);
    if(n<3)
        puts("Número inválido");
    }
    while(n<3);
    for(i=3; i<=n; i++){
        soma = soma + (5*i+2);
    }
    printf("A soma do somátorio é %d", soma);
}
