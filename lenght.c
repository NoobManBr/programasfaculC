#include<stdio.h>
#define DIM 20
#define SEP_NOME ", "

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
