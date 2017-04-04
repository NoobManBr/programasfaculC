/**************************************************************************************************
* Prog31 Lista de exercícios - MAYCON BRUNO DE JESUS                                              *
*   Faça um programa que leia um número inteiro positivo e determine se este é primo ou não. Por  *
*   definição, um número é primo quando é divisível somente por si próprio e por 1.               *
***************************************************************************************************/
#include<stdio.h>

main(){
        int num,aux,cont;

        puts("PRIMOS");
        puts("Digite um número");
        scanf("%d", &num);
        for(aux=1,cont=0; aux<=num;aux++){
            if(num%aux==0)
                    cont++;
        }
        if(cont==2)
            printf("O número %d é primo", num);
        else
            printf("O número %d não é primo", num);
}
