#include<stdio.h>
#include<locale.h>

main(){
    setlocale(LC_ALL,"Portuguese");
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
