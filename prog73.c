#include<stdio.h>

void ordenar(char *s);
void exibir(char *s);

int main(){
    char str[50];

    puts("Digite a string");
    scanf("%s", str);
    exibir(str);
    ordenar(str);
}

void ordenar(char *s){
    int i,j,aux;

    for(i=0; s[i]!='\0'; i++){
        for(j=0; s[j]!='\0'; j++)
            if(s[i]<s[j]){
                aux=s[i];
                s[i]=s[j];
                s[j]=aux;
            }
        }
    exibir(s);
}

void exibir(char *s){
    printf("%s", s);
    putchar('\n');
}
