/**************************************************************************************************
* Prog29 Lista de exercícios - MAYCON BRUNO DE JESUS                                              *
* Faça um programa que solicita ao usuário dois números inteiros diferentes “n1” e “n2” e calcula *
* a soma de todos os números ímpares dentro do intervalo definidor por [n1,...,n2]. Considere que *
* n1 é sempre menor do que n2.                                                                    *
***************************************************************************************************/
#include<stdio.h>

main(){
    int n1,n2,soma;

    puts("SOMA DOS IMPARES NO INTERVALO");
    puts("Digite o 1º número");
    scanf("%d", &n1);
    puts("Digite o 2º número");
    scanf("%d", &n2);
    for(soma=0; n1<=n2; n1++){
        if(n1%2!=0)
            soma = soma +n1;
    }
    printf("A soma dos impares no intervalo é %d", soma);
}
