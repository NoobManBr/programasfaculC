#include<stdio.h>
#include<stdlib.h>

#define LINHA 5
#define COLUNA 5

int main(){
    int i,j,matriz1[LINHA][COLUNA],matriz2[LINHA][COLUNA];
    srand(time(0));
    FILE *fp;

    for(i=0;i<LINHA; i++)
      for(j=0; j<COLUNA; j++)
          matriz1[i][j] = rand()%10;
    for(i=0;i<LINHA; i++)
      for(j=0; j<COLUNA; j++)
          matriz2[i][j] = rand()%10;

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

    fp = fopen("Matriz.txt", "wb");
    for(i=0;i<LINHA; i++)
      for(j=0; j<COLUNA; j++)
        fprintf(fp,"%d\n",matriz1[i][j]);
    for(i=0;i<LINHA; i++)
      for(j=0; j<COLUNA; j++)
        fprintf(fp,"%d\n",matriz2[i][j]);
    fclose(fp);

    fp = fopen("Matriz.txt", "rb");
      for(i=0;i<LINHA; i++)
        for(j=0; j<COLUNA; j++)
            fscanf(fp,"%d\n",matriz1[i][j]);
      for(i=0;i<LINHA; i++)
        for(j=0; j<COLUNA; j++)
            fscanf(fp,"%d\n",matriz1[i][j]);
    fclose(fp);
}
