/**************************************************************************************************
* Prog37 Lista de exercícios - MAYCON BRUNO DE JESUS                                              *
*    Faça um programa usando o comando “for” para calcular o seguinte somatório:                  *
*    n                                                                                            *
*    ∑(5*i+2)                                                                                     *
*    i=3            em que “n” é definido pelo usuário                                            *
***************************************************************************************************/
#include<stdio.h>

main(){
    int num,soma;

    puts("SOMA DOS MÚLTIPLOS DE 3 OU 5 MENORES QUE 1000");
    for(num=1; num<1000; num++){
        if(num%3==0 || num%5==0)
            soma = soma + num;
    }
    printf("A soma dos números é %d\n", soma);
}
