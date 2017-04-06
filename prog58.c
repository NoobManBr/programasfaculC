#include<stdio.h>

int mdc(int a,int b){
    int resto;

    while(b!=0){
        resto=a%b;
        a=b;
        b=resto;
    }
    return a;
}

main(){
    int a,b;
    puts("MDC entre dois números");
    scanf("%d %d", &a,&b);
    printf("O MDC é %d", mdc(a,b));
}
