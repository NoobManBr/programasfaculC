/**************************************************************************************************
* Prog12 Lista de exerc�cios - MAYCON BRUNO DE JESUS                                              *
*   Fa�a um programa que leia um n�mero inteiro de 4 d�gitos e escreva-o invertido. Por exemplo,  *
*   se o n�mero lido for 2548, o resultado ser� 8452. Dica: utilize o comando % que retorna       *
*   resto da divis�o entre 2 n�meros inteiros.                                                    *
***************************************************************************************************/
#include<stdio.h>

main(){
    int num;

    printf("INVERSOR DE N�MEROS 4 D�GITOS\n");
    printf("Digite um n�mero de 4 d�gitos\n");
    scanf("%d", &num);
    printf("%d", num%10);
    num = num/10;
    printf("%d", num%10);
    num = num/10;
    printf("%d", num%10);
    num = num/10;
    printf("%d", num%10);
}
