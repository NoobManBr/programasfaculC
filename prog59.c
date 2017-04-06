#include<stdio.h>
int bissexto(int dia, int mes, int ano){
        int dias,soma;
        if(ano%100==0 && ano%400==0 ||ano%100!= && ano%4==0)
            return 1;
        else
            return 0;

 }

 main(){
    int dia,mes,ano;
    puts("DIAS TRANSCORRIDOS");
    puts("Digite o dia")
    scanf("%d", &dia);
 }
