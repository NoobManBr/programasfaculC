/**************************************************************************************************
* Prog27 Lista de exerc�cios - MAYCON BRUNO DE JESUS                                              *
*   Fa�a um programa que calcule a multiplica��o de 2 n�meros inteiros sem utilizar o operador    *
*   �*�. Em vez disso, utilize apenas o operador de adi��o �+�.                                   *
***************************************************************************************************/
#include<stdio.h>

main(){
    int num1,num2,i, res;

    puts("Digite o primeiro n�mero");
    scanf("%d", &num1);
    puts("Digite o segundo n�mero");
    scanf("%d", &num2);
    for(i=1, res=0; i<=num2; i++){
        res = res + num1;
    }
    printf("Resultado = %d\n", res);
}
