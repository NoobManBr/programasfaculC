/**************************************************************************************************
* Prog39 Lista de exercícios - MAYCON BRUNO DE JESUS                                              *
*   O número 2520 é divisível (resto zero) por todos números inteiros de 1 a 10. Faça um programa *
*   que encontre o menor número inteiro positivo divisível por todos os inteiros de 1 a 20.       *
*   Resposta: 232792560                                                                           *
***************************************************************************************************/
#include<stdio.h>

main(){
    unsigned long int num,div,cont;

    for(num=0,div=1,cont=0; cont<20; div++){
        if(cont==0){
            div=1;
            num++;
        }
        if(num%div==0)
            cont++;
        else
            cont=0;
        }
    printf("O numero é %lu", num);
}

