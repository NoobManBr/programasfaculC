/**************************************************************************************************
* Prog35 Lista de exercícios - MAYCON BRUNO DE JESUS                                              *
*    Faça um programa para calcular e mostrar o valor de PI, usando a série:                      *
*    PI=4- 4/3 + 4/5 – 4/7 + 4/9 -... até que um termo seja menor do que 0.0001, em valor         *
*    absoluto.                                                                                    *
***************************************************************************************************/
#include<stdio.h>

main(){
    int cont;
    float num,den,soma;

    for(num=4,den=1,soma=0,cont=1; num/den>=0.00001; den+=2,cont++){
        if(cont%2!=0)
            soma = soma + num/den;
        else if(cont%2==0)
            soma = soma - num/den;
    }
    printf("O valor de PI é %f", soma);
}
