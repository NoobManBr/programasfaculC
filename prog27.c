/**************************************************************************************************
* Prog27 Lista de exercícios - MAYCON BRUNO DE JESUS                                              *
*   Faça um programa que calcule a multiplicação de 2 números inteiros sem utilizar o operador    *
*   “*”. Em vez disso, utilize apenas o operador de adição “+”.                                   *
***************************************************************************************************/
#include<stdio.h>

main(){
    int num1,num2,i, res;

    puts("Digite o primeiro número");
    scanf("%d", &num1);
    puts("Digite o segundo número");
    scanf("%d", &num2);
    for(i=1, res=0; i<=num2; i++){
        res = res + num1;
    }
    printf("Resultado = %d\n", res);
}
