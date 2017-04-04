#include<stdio.h>
main(){
    int x,y;
    printf("Digite dois números\n");
    scanf("%d", &x);
    scanf("%d", &y);
    if(x==0 && y<=32)
        printf("Sucesso!\n");
}
