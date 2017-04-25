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
    int i,aux;

    for(i=0; i!='\0'; i++){
        if(s[i]>s[i+1]){
                aux=s[i];
                s[i]=s[i+1];
                s[i+1]=aux;
            }
        }
    for(i=0; i!='0';i++)
        printf("%s", s);
    putchar('\n');
}

void exibir(char *s){
    printf("%s ", s);
    putchar('\n');
}
