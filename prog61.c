#include<stdio.h>

int primos(int num){
    int cont,aux;
    for(cont=0,aux=1;aux<=num;aux++){
        if(num%aux==0)
            cont++;
    }
    if(cont==2)
        return 1;
    else
        return 0;
}

main(){
    int num;
    puts("PRIMOS");
    puts("Digite um número");
    scanf("%d", &num);
    if(primos(num)==1)
        puts("O número é primo");
    if(primos(num)==0)
        puts("O número não é primo");
}
