#include<stdio.h>
#include<stdlib.h>

#define LINHA 5
#define COLUNA 5

int write(FILE *fp, int matriz1[LINHA][COLUNA], int matriz2[LINHA][COLUNA], int matriz3[LINHA][COLUNA]);
int read(FILE *fp, int matriz1[LINHA][COLUNA], int matriz2[LINHA][COLUNA], int matriz3[LINHA][COLUNA]);

int main(){
    int i,j,matriz1[LINHA][COLUNA],matriz2[LINHA][COLUNA],matriz3[LINHA][COLUNA];
    srand(time(0));
    FILE *fp;

    for(i=0;i<LINHA; i++)
      for(j=0; j<COLUNA; j++)
          matriz1[i][j] = rand()%10;
    for(i=0;i<LINHA; i++)
      for(j=0; j<COLUNA; j++)
          matriz2[i][j] = rand()%10;
    for(i=0;i<LINHA; i++)
      for(j=0; j<COLUNA; j++)
        matriz3[i][j] = matriz1[i][j] + matriz2[i][j];

    write(fp,matriz1,matriz2,matriz3);
    read(fp,matriz1,matriz2,matriz3);
}

int write(FILE *fp, int matriz1[LINHA][COLUNA], int matriz2[LINHA][COLUNA], int matriz3[LINHA][COLUNA]){
  int i,j;
  fp = fopen("Matriz2.txt", "a");
  for(i=0;i<LINHA; i++)
    for(j=0; j<COLUNA; j++)
      fprintf(fp,"%d\n",matriz1[i][j]);
  for(i=0;i<LINHA; i++)
    for(j=0; j<COLUNA; j++)
      fprintf(fp,"%d\n",matriz2[i][j]);
  for(i=0;i<LINHA; i++)
    for(j=0; j<COLUNA; j++)
      fprintf(fp,"%d\n",matriz3[i][j]);

  printf("Gravei com sucesso\n");
  fclose(fp);
}

int read(FILE *fp, int matriz1[LINHA][COLUNA], int matriz2[LINHA][COLUNA], int matriz3[LINHA][COLUNA]){
  int i,j;
  fp = fopen("Matriz2.txt", "a");
    printf("Print de dentro do arquivo\n");
    for(i=0;i<LINHA; i++){
      for(j=0; j<COLUNA; j++){
          fscanf(fp,"%d\n",&matriz1[i][j]);
          printf("%d ", matriz1[i][j]);
      }
    putchar('\n');
    } putchar('\n');
    for(i=0;i<LINHA; i++){
      for(j=0; j<COLUNA; j++){
          fscanf(fp,"%d\n",&matriz2[i][j]);
          printf("%d ", matriz2[i][j]);
      }
    putchar('\n');
    } putchar('\n');
    for(i=0;i<LINHA; i++){
      for(j=0; j<COLUNA; j++){
        matriz3[i][j] = matriz1[i][j] + matriz2[i][j];
        printf("%d ", matriz3[i][j]);
      }
    putchar('\n');
    } putchar('\n');
  fclose(fp);
}
