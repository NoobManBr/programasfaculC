#include<stdio.h>

main(){
    int num;
    int d1=1,d2=1,d3=1;

    puts("POSSIBILIDADES EM TRÊS DADOS");
    puts("Digite um número entre 3 e 18");
    scanf("%d", &num);

    while(d3<=6){
         while(d2<=6){
            if(d1+d2+d3!=num)
         }
         if(d1+d2+d3!=num)
            d1++;
         if(d1+d2+d3==num){
            printf("%d %d %d\n", d1,d2,d3);
            d1++;
        }
}

