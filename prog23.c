#include<stdio.h>
#include<locale.h>

main(){
    setlocale(LC_ALL,"Portuguese");
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
