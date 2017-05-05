#include<stdio.h>

void eliminar(char *v, char ch);

int main(){
    char str[50];
    char ch;

    puts("Digite uma string");
    gets(str);
    printf("%s\n", str);
    puts("Digite um caractere");
    scanf("%c", &ch);
    eliminar(str,ch);
}

void eliminar(char *v, char ch){
    char aux[50];
    int i,j;

    for(i=j=0;v[i]!='\0';i++){
        if(v[i]!=ch){
            aux[j++]=v[i];
        }
    }
    aux[i]='\0';
    printf("%s", aux);
}

