#include<stdio.h>
#include<stdlib.h>

#define LINHA 5
#define COLUNA 5

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

    printf("Print de fora do arquivo\n");
    for(i=0;i<LINHA; i++){
      for(j=0; j<COLUNA; j++)
        printf("%d ", matriz1[i][j]);
    putchar('\n');
    }
    putchar('\n');
    for(i=0;i<LINHA; i++){
      for(j=0; j<COLUNA; j++)
        printf("%d ", matriz2[i][j]);
    putchar('\n');
    }
    putchar('\n');
    for(i=0;i<LINHA; i++){
      for(j=0; j<COLUNA; j++)
        printf("%d ", matriz3[i][j]);
    putchar('\n');
    }

    fp = fopen("Matriz.txt", "w");
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

    fp = fopen("Matriz.txt", "r");
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
            fscanf(fp,"%d\n",&matriz3[i][j]);
            printf("%d ", matriz3[i][j]);
        }
      putchar('\n');
      } putchar('\n');
    fclose(fp);
}
