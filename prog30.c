/**************************************************************************************************
* Prog30 Lista de exercícios - MAYCON BRUNO DE JESUS                                              *
*   Altere o programa anterior de tal maneira que quando o usuário digitar um intervalo inválido  *
*   (n1>n2), o programa irá solicitar novos valores para n1 e n2.                                 *
***************************************************************************************************/
#include<stdio.h>

main(){
    int n1,n2,soma;

    puts("SOMA DOS IMPARES NO INTERVALO");
    do{
        puts("Digite o 1º número");
        scanf("%d", &n1);
        puts("Digite o 2º número");
        scanf("%d", &n2);
    } while(n1>n2);
    for(soma=0; n1<=n2; n1++){
        if(n1%2!=0)
            soma = soma +n1;
    }
    printf("A soma dos impares no intervalo é %d", soma);
}
