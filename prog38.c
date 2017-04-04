/**************************************************************************************************
* Prog38 Lista de exercícios - MAYCON BRUNO DE JESUS                                              *
*   Cada novo termo da sequência de Fibonacci é gerado pela adição dos 2 termos anteriores. Ao    *
*   iniciar a sequência com 1 e 2, os dez primeiros termos são: 1, 2, 3, 5, 8, 13, 21, 34, 55, 89,*
*   … Faça um programa que encontre a soma dos números pares da sequência de Fibonacci cujo termo *
*   não exceda 4 milhões.                                                                         *
Resposta: 4613732                                                                                 *
***************************************************************************************************/

#include<stdio.h>
main(){
	long int termo,soma,soma_pares;

	for(termo=1,soma=0,soma_pares=0; termo<=4000000;){
        if(soma%2==0){
            soma_pares+=soma;
        }
        soma+=termo;
        if(termo%2==0){
            soma_pares+=termo;
        }
        termo+=soma;
	}
    printf("A soma dos termos pares de fibonacci é %ld", soma_pares);
}
