#include<stdio.h>
#include<stdlib.h>

char *strchar(char *s, char ch);

int main(){
    char str[50];
    char ch;

    puts("Digite a string");
    scanf("%s", str);
    puts("Digite o caractere");
    scanf(" %c", &ch);
    printf("%p",strchar(str,ch));
}

char *strchar(char *s, char ch){
    int i;
    char *ptr = s;

    while(*ptr!='\0'){
        if(*ptr==ch){
            printf("%c\n", *ptr);
            return ptr;
        }
    ptr++;
    }
    return NULL;
}
