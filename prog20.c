/**************************************************************************************************
* Prog20 Lista de exerc�cios - MAYCON BRUNO DE JESUS                                              *
*    Fa�a um programa capaz de identificar se um n�mero � igual a 1, 5 ou 10. Caso n�o seja       *
*    nenhum desses valores, retornar a mensagem �Valor inv�lido�.                                 *
***************************************************************************************************/
#include<stdio.h>

main(){
    int num;

    printf("ACERTA MISERAVI!\n");
    printf("Digita um n�mero miseravi\n");
    scanf("%d", &num);
    if(num==1 || num==5 || num==10)
        printf("Acert� Miseravi\n");
    else
        printf("Valor inv�lido\n");
}
