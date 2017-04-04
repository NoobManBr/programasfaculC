/**************************************************************************************************
* Prog9 Lista de exercícios - MAYCON BRUNO DE JESUS                                               *
*    Num triângulo retângulo, segundo Pitágoras, o quadrado da hipotenusa (a) é igual a soma dos  *
*    quadrados dos catetos (b e c). Faça um algoritmo que recebe o valor dos catetos e imprime o  *
*    valor da hipotenusa.                                                                         *
***************************************************************************************************/
#include<stdio.h>
#include<math.h>

main(){
    float cateto_op,cateto_adj,hip;

    puts("Digite o valor do cateto oposto");
    scanf("%f", &cateto_op);
    puts("Digite o valor do cateto adjacente");
    scanf("%f", &cateto_adj);
    hip=sqrt(pow(cateto_op,2) + pow(cateto_adj,2));
    printf("O valor da hipotenusa é %.2f", hip);
}
