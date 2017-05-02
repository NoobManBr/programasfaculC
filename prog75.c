#include<stdio.h>
int * strchar (char *s, char ch);

int main(){
    char str[50];
    char ch;

    puts("Digite a string");
    scanf("%s", str);
    puts("Digite o caractere");
    scanf(" %c", &ch);

    printf("%d",strchar(str,ch));
}

int * strchar (char *s, char ch){
    int i,aux;

    for(i=0; s[i]!='\0';i++){
        if(s[i]==ch)
            aux=s[i];
    }

        return i;




}



