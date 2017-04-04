/**************************************************************************************************
* Prog32 Lista de exercícios - MAYCON BRUNO DE JESUS                                              *
*   Otimize o programa anterior com base nas seguintes considerações:                             *
*      - Números pares (com exceção do 2) não podem ser primos, visto que são divisíveis por 2.   *
*       Se um número não for divisível por 2, não será divisível por nenhum outro número par.     *
*       Portanto, com excecão do número 2, somente é necessário testar números ímpares.           *
*       - É mais fácil que um número seja divisível por um número pequeno do que por um número    *
*       maior. Portanto, se iniciarmos a procura do divisor de baixo para cima, ao invés de cima  *
*       para baixo teremos chance de encontrar o número muito antes.                              *
*       - Nenhum número pode ser divisível por outro número maior que a metade dele. Portanto, não*
*       precisamos testar a divisibilidade dos números na faixa entre a metade e o próprio número.*
***************************************************************************************************/
#include<stdio.h>

main(){
        int num,aux,cont;

        puts("PRIMOS");
        puts("Digite um número");
        scanf("%d", &num);
        for(aux=1,cont=0; aux<=num/2;aux++){
            if(num%2!=0){
                if(num%aux==0)
                    cont++;
            }
        }
        if(cont==2)
            printf("O número %d é primo", num);
        else
            puts("O número não é primo");
}
