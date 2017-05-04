#include<stdio.h>

int * strchar (char *s, char ch);

int main(){
    char str[50];
    char ch;

    puts("Digite a string");
    scanf("%s", str);
    puts("Digite o caractere");
    scanf(" %c", &ch);
    printf("%p",strchar(str,ch));
}

int *strchar (char *s, char ch){
    char *ptr = s;
    int aux;

    for(; *ptr!='\0'; ptr++){
        if(*ptr==ch)
            aux=ptr;
    }
    ptr = &ptr[aux];
    return ptr;
}



