/**************************************************************************************************
* Prog34 Lista de exercícios - MAYCON BRUNO DE JESUS                                              *
*    Faça um programa para calcular o valor de S, dado por:                                       *
*    S= 1/1 – 2/4 + 3/9 – 4/16 + … - 10/100                                                       *
***************************************************************************************************/
#include<stdio.h>
#include<math.h>

main(){
    float soma, den;
    int num;

    for(soma=0,den=1,num=1; den<=100; num++,den = pow(num,2)){
        if(num%2==0)
            soma = soma - num/den;

        if(num%2!=0)
            soma = soma + num/den;

    }
    printf("A soma é %f", soma);
}
