/**************************************************************************************************
* Prog24 Lista de exercícios - MAYCON BRUNO DE JESUS                                              *
*    Faça um algoritmo que simule uma calculadora com as quarto operações básicas (+,-,*,/). O    *
*    algoritmo deve solicitar ao usuário a entrada de dois operandos e da operação a ser          *
*    executada, na forma de menu. Dependendo da opção escolhida, deve ser executada a operação    *
*    solicitada e escrito seu resultado. Utilize uma variável do tipo caractere para armazenar a  *
*    operação e utilize o comando caso para escolher a operação a partir do operador.             *
*    (Solução PROG0316.c, página 73 do livro texto).                                              *
***************************************************************************************************/
#include<stdio.h>

main(){
    float num1, num2, res;
    char operando;
    puts("CALCULADORA");
    puts("Qual operação deseja fazer?");
    puts("+ : Adição");
    puts("- : Subtração");
    puts("* : Multiplicação");
    puts("/ : Divisão");
    scanf("%c", &operando);
    puts("Digite o primeiro número");
    scanf("%f", &num1);
    puts("Digite o segundo número");
    scanf(" %f", &num2);
    switch(operando){
        case '+': printf("%.2f + %.2f = %.2f", num1,num2,(num1+num2)); break;
        case '-': printf("%.2f - %.2f = %.2f", num1,num2,(num1-num2)); break;
        case '*': printf("%.2f * %.2f = %.2f", num1,num2,(num1*num2)); break;
        case '/': printf("%.2f / %.2f = %.2f", num1,num2,(num1/num2)); break;
    }
}
