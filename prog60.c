#include<stdio.h>

bissexto(int ano){
    if((ano%100 == 0 && ano%400 == 0) || (ano%100 != 0 && ano%4 == 0))
        return 1;
    else
        return 0;
}

int dias_transcorridos(int dia, int mes, int ano){
    int soma=0;
    switch(mes-1){
        case 12: soma = soma + 31;
        case 11: soma = soma + 30;
        case 10: soma = soma + 31;
        case 9: soma = soma + 30;
        case 8: soma = soma + 31;
        case 7: soma = soma + 31;
        case 6: soma = soma + 30;
        case 5: soma = soma + 31;
        case 4: soma = soma + 30;
        case 3: soma = soma + 31;
        case 2: soma = soma + (bissexto(ano)) + 28;
        case 1: soma = soma + 31;
    }
    return (soma+dia);
}
main(){
    int ano, mes, dia;

    printf("QUANTOS DIAS SE PASSARAM\n");
    printf("Digite o ano\n");
    scanf("%d", &ano);
    printf("Digite o mês\n");
    scanf(" %d", &mes);
    printf("Digite o dia\n");
    scanf(" %d", &dia);

    printf("A soma dos dias percorridos é: %d", dias_transcorridos(dia,mes,ano));
}


