#include<stdio.h>

main(){
    float soma, i;
    float num = 0.00001;
    int cont;

    /*puts("Digite um número");
    scanf("%f", &num);*/
    i=2;
    soma=1;
    cont=0;
    while(1/i>=num){
        cont++;
        soma = soma + 1/i ;
        printf("%d - %f\n",cont, soma);
    i += 2;
    }
    printf("A soma é %f", soma);
}
