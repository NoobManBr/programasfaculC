/**************************************************************************************************
* Prog6 Lista de exercícios - MAYCON BRUNO DE JESUS                                               *
*    Faça um programa para calcular o número de vértices de um cubo com 6 faces e 12 arestas. A   *
*    relação entre vértices, arestas e faces de um objeto geométrico é dada por:                  *
*    “vértices + faces = arestas + 2”.                                                            *
***************************************************************************************************/
#include<stdio.h>

main(){
    int vertices;
    int faces=6, arestas=12;

    vertices = arestas - faces + 2;
    printf("Um cubo com %d faces e %d arestas tem %d vertices\n", faces, arestas, vertices);
}
