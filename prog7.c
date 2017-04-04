/**************************************************************************************************
* Prog7 Lista de exercícios - MAYCON BRUNO DE JESUS                                               *
*    Sabe-se que o valor de cada 1000 litros de água corresponde a 2% do salário mínimo. Faça um  *
*    programa para receber o valor do salário mínimo e a quantidade de água consumida em uma      *
*    residência por mês. O algoritmo deverá calcular e mostrar: a) o valor da conta de água. b)   *
*     o valor a ser pago com desconto de 15%.                                                     *
***************************************************************************************************/
#include<stdio.h>

main(){
    float salario, desconto;
    int agua_consumida;

    puts("Digite o seu salário");
    scanf("%f", &salario);
    puts("Digite a quantidade de água consumida");
    scanf("%d", &agua_consumida);
    printf("O valor da conta de agua é %f\n", ((salario*0.02)*agua_consumida)/1000);
    desconto = salario*0.15;
    printf("O valor com 15%% de desconto é %f\n", salario-desconto);
}
