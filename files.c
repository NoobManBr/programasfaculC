#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    FILE *fp;
    char str[100],ch;
    int i;

    fp = fopen("arquivo.txt","r");
        printf("%d\n", fp);
        if(fp==NULL)
            printf("Erro na abertura do arquivo\n");
        else
            puts("Arquivo aberto com sucesso");
    puts("Entre com a string a ser gravada no arquivo");
    gets(str);

    for(i=0; i<strlen(str); i++){
        fputc(str[i],fp);
        fputc(str[i],stdout);
    }

    fflush(fp);
    //rewind(fp);

    puts("Arquivo gravado com sucesso");

    for(i=0;i<strlen(str); i++){
            ch = fgetc(fp);
            printf("%c", ch);
    }
    printf("%d\n", fp);
    fclose(fp);

    /*fp = fopen("arquivo.txt", "r");
      printf("%d\n", &fp);
    fclose(fp);*/

}
