/**************************************************************************************************
* Prog10 Lista de exercícios - MAYCON BRUNO DE JESUS                                              *
*    Escreva um programa para determinar a quantidade de litros de combustível gastos em uma      *
*    viagem por um automóvel que faz 12 km/litro. Para isso, sabe-se que o tempo gasto na viagem  *
*    é T=35 min e a velocidade média do automóvel é V = 80 km/h.                                  *
***************************************************************************************************/
#include<stdio.h>

main(){
    float tempo=0.5833;
    float distancia;
    float vel=80;
    float consumo;
    distancia=vel*tempo;
    consumo=distancia/12;
    printf("A quantidade de combustível gasto é %f km/l\n", consumo);
}
