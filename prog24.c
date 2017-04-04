/**************************************************************************************************
* Prog24 Lista de exerc�cios - MAYCON BRUNO DE JESUS                                              *
*    Fa�a um algoritmo que simule uma calculadora com as quarto opera��es b�sicas (+,-,*,/). O    *
*    algoritmo deve solicitar ao usu�rio a entrada de dois operandos e da opera��o a ser          *
*    executada, na forma de menu. Dependendo da op��o escolhida, deve ser executada a opera��o    *
*    solicitada e escrito seu resultado. Utilize uma vari�vel do tipo caractere para armazenar a  *
*    opera��o e utilize o comando caso para escolher a opera��o a partir do operador.             *
*    (Solu��o PROG0316.c, p�gina 73 do livro texto).                                              *
***************************************************************************************************/
#include<stdio.h>

main(){
    float num1, num2, res;
    char operando;
    puts("CALCULADORA");
    puts("Qual opera��o deseja fazer?");
    puts("+ : Adi��o");
    puts("- : Subtra��o");
    puts("* : Multiplica��o");
    puts("/ : Divis�o");
    scanf("%c", &operando);
    puts("Digite o primeiro n�mero");
    scanf("%f", &num1);
    puts("Digite o segundo n�mero");
    scanf(" %f", &num2);
    switch(operando){
        case '+': printf("%.2f + %.2f = %.2f", num1,num2,(num1+num2)); break;
        case '-': printf("%.2f - %.2f = %.2f", num1,num2,(num1-num2)); break;
        case '*': printf("%.2f * %.2f = %.2f", num1,num2,(num1*num2)); break;
        case '/': printf("%.2f / %.2f = %.2f", num1,num2,(num1/num2)); break;
    }
}
