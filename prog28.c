/**************************************************************************************************
* Prog28 Lista de exercícios - MAYCON BRUNO DE JESUS                                              *
*  Faça um programa que calcule o fatorial de um número. Se o número for menor do que zero, então *
*  o algoritmo deverá informar ao usuário que o valor é inválido.                                 *
***************************************************************************************************/
#include<stdio.h>

main(){
    double fatorial;
    int i, num;
    do{
        puts("FATORIAL");
        puts("Digite um número");
        scanf("%d", &num);
        if(num<0)
        puts("Número inválido");
    } while(num<0);
    for(i=1, fatorial=1; i<=num; i++){
          fatorial = fatorial * i;
    }
    printf("O fatorial de %d é %.0f\n", num, fatorial);
}
