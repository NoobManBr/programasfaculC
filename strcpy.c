#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>

#define DIM 20
#define SEP_NOME ", "

void menu(){
    puts("1 - Tamanho da string");
    puts("2 - Saber se a string é nula");
    puts("3 - Copiar a string");
    puts("4 - Concatenar uma string a outra");
    puts("5 - Contar um respectivo caractera na string");
    puts("6 - Contar quantos digitos existe na string");
    puts("7 - Indice da ocorrência de um respectivo caractere na string");
    puts("8 - Verifica palíndromo");
}
char strcpy(char *dest, char *orig){ //copia a string
	int i;
	for(i=0; orig[i]!='\0'; i++)
		dest[i] = orig[i];
	dest[i] = '\0';
	return dest;
}

char strcat(char *dest, char *orig){ //concatena. coloca a string orig imediaamente apos o final da string dest
	int i,len;
	for(i=0, len=strlen(dest); orig[i]!='\0'; i++,len++)
		dest[len] = orig[i];
	dest[len] = '\0';
	return dest;
}

int strlen(char *s){ //verifica o tamanho da string
	int i=0;
	while(s[i]!='\0')
		i++;
	return i;
}

int isnull(char *s){ //verifica se é nula ou não
    return (s[0]=='\0');
}

int strcountc(char *s, char ch){// conta a quantidade de caracteres
    int i,cont;
    for(i=cont=0; s[i]!='\0'; i++)
        if(s[i]==ch)
            cont++;
    return cont;
}

int strcountd(char *s){ //conta a quantidade de dígitos
    int i,cont;
    for(i=cont=0; s[i]!='\0'; i++)
        if(isdigit(s[i]))
            cont++;
    return cont;
}

int indchr(char *s, char ch){ // devolve o indice da primeira ocorrencia do caractere ch na string s
    int i;
    for(i=0; s[i]!='\n'; i++)
        if(s[i]==ch)
            return i;
    return -1;
}

int strpal(char *s){ //verifica se é um palindromo
    int i,j;
    for(i=0,j=strlen(s)-1; i<j; i++,j++)
        if(s[i]!=s[j])
            return 0;
    return 1;
}

char *strrev(char *s){ //string invertida
    int i,len;
    char aux;
    for(i=0,len=strlen(s)-1; i<len; i++,len--){
        aux = s[i];
        s[i] = s[len];
        s[len] = aux;
    }
    return s;
}
int strcmp(char *s1, char *s2){
    
}
int main(){
	char str1[100],str2[100];
    int cho;

	menu();
	scanf("%d", &cho);
    switch(cho){
        case 1: printf("Entre com a string\n"); scanf("%s", str1); printf("O tamanho da string é %d", strlen(str1)); break;
        case 2: printf("Entre com a string\n"); scanf("%s", str1);
        if(isnull(str1)==0)
            printf("A string não é nula\n");
        else
            printf("A string é nula\n");
        break;
    }


}
