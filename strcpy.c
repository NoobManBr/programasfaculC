#include<stdio.h>
#define DIM 20
#define SEP_NOME ", "

char strcpy(char *dest, char *orig){
	int i;
	for(i=0; orig[i]!='\0'; i++)
		dest[i] = orig[i];
	dest[i] = '\0';
	return dest;
}

char strcat(char *dest, char *orig){
	int i,len;
	for(i=0, len=strlen(dest); orig[i]!='\0'; i++,len++)
		dest[len] = orig[i];
	dest[len] = '\0';
	return dest;
}

int strlen(char *s){
	int i=0;
	while(s[i]!='\0')
		i++;
	return i;
}

int main(){
	char nome[DIM+1], sobrenome[DIM+1], completo[2*DIM+1];
	
	while(1){
		printf("Nome: ");
		gets(nome);
		if(strlen(nome)==0)
			break;
		printf("Sobrenome: ");
		gets(sobrenome);
		strcpy(completo, sobrenome);
		strcat(completo, SEP_NOME);
		strcat(completo, nome);
		puts(completo); 
	}
}
