/**************************************************************************************************
* Prog18 Lista de exerc�cios - MAYCON BRUNO DE JESUS                                              *
*    Fa�a um programa que leia dois n�meros inteiros e determine qual dos dois � maior.           *
*    Considere que os dois n�meros podem ser iguais. Neste caso, o programa deve escrever uma     *
*    mensagem para o usu�rio informando-o de que deve entrar com n�meros diferentes.              *
***************************************************************************************************/
#include<stdio.h>

main(){
    int x,y;

    printf("MAIOR N�MERO\n");
    printf("Digite o primeiro n�mero\n");
    scanf("%d", &x);
    printf("Digite o segundo n�mero\n");
    scanf(" %d", &y);
    while(x==y){
        printf("Os n�meros s�o iguais\n");
        printf("Digite novos n�meros\n");
        printf("Digite o primeiro n�mero\n");
        scanf("%d", &x);
        printf("Digite o segundo n�mero\n");
        scanf(" %d", &y);
    }
    if(x>y)
        printf("%d � maior do que %d\n", x,y);
    if(x<y)
        printf("%d � menor do que %d\n", x,y);
}
