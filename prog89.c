#include<stdio.h>
#include<string.h>

#define MAX_CON 10
#define NULO ' '

void menu();
void insert(FILE *fp, int names[MAX_CON][50], int age[MAX_CON], int tel[MAX_CON]);
int edit(FILE *fp, int names[MAX_CON][50], int age[MAX_CON], int tel[MAX_CON]);
int erase(FILE *fp, int names[MAX_CON][50], int age[MAX_CON], int tel[MAX_CON]);


int main(){
  char names[MAX_CON][50];
  int age[MAX_CON],tel[MAX_CON],cho;
  int i,j,control;
  FILE *fp;
  FILE *f_aux;

  do{
    menu();
    scanf("%d", &cho);
    switch (cho) {
      case 1: insert(fp,names,age,tel); break;
      case 2: edit(fp,names,age,tel); break;
      case 3: view(fp,names,age,tel); break;
      case 4: erase(fp,names,age,tel); break;
    }
  } while(cho!=0);

}

void menu(){
  puts("1 - Insert");
  puts("2 - Edit");
  puts("3 - View");
  puts("4 - Erase");
  puts("0 - Exit");
}

void insert(FILE *fp, int names[MAX_CON][50], int age[MAX_CON], int tel[MAX_CON]){
  int i,lim;
  fp = fopen("Agenda.txt", "a+");
    puts("How many contacts you want to insert?");
    scanf("%d", &lim);
    for(i=0;i<lim;i++){
      puts("Type a name");
      getchar();
      gets(names[i]);
      fprintf(fp,"%s\n",names[i]);
      puts("Type a age");
      scanf("%d", &age[i]);
      fprintf(fp,"%d\n",age[i]);
      puts("Type a number of telephone");
      scanf("%d", &tel[i]);
      fprintf(fp,"%d\n",tel[i]);
    }
  fclose(fp);
}

int view(FILE *fp, int names[MAX_CON][50], int age[MAX_CON], int tel[MAX_CON], int control){
  int i=0;
  char str[50];
  fp = fopen("Agenda.txt", "r");
    puts("Which contact you want to see?");
    getchar();
    gets(str);
    while(!feof(fp)){
      fscanf(fp,"%s\n",names[i]);
      if(strcmp(str,names[i])==0){
        //fscanf(fp,"%s\n",names[i]);
        printf("Name: %s\n", names[i]);
        fscanf(fp, "%d\n", &age[i]);
        printf("Age: %d\n", age[i]);
        fscanf(fp,"%d\n", &tel[i]);
        printf("Telephone: %d\n", tel[i]);
      }
    i++;
    }
  fclose(fp);
}

int edit(FILE *fp, int names[MAX_CON][50], int age[MAX_CON], int tel[MAX_CON]){
  int i=0,t;
  char str[50];
  fp = fopen("Agenda.txt", "r+");
    puts("Which contact you want to edit?");
    getchar();
    gets(str);
    while(!feof(fp)){
      fscanf(fp,"%s\n",names[i]);
      t = strlen(names[i]);
      printf("%d\n",t);
      if(strcmp(str,names[i])==0){
        fseek(fp,-1*(t+1), SEEK_CUR);
        printf("%d", ftell(fp));
        puts("Type a name");
        fflush(stdin);
        gets(names[i]);
        fprintf(fp,"%s\n",names[i]);
        puts("Type a age");
        scanf("%d", &age[i]);
        fprintf(fp,"%d\n",age[i]);
        puts("Type a number of telephone");
        scanf("%d", &tel[i]);
        fprintf(fp,"%d\n",tel[i]);
      }
    i++;
    }
    fclose(fp);
}

int erase(FILE *fp, int names[MAX_CON][50], int age[MAX_CON], int tel[MAX_CON]){
  int i=0,t,j;
  char str[50];

  fp = fopen("Agenda.txt", "r+");
    puts("Which contact you want to erase?");
    getchar();
    gets(str);
    while(!feof(fp)){
        fscanf(fp,"%s\n",names[i]);
        t = strlen(names[i]);
      if(strcmp(str,names[i])==0){
        fseek(fp,-1*(t+1), SEEK_CUR);
        for(j=0; j<t; j++){
          puts("oi");
          fprintf(fp," ",names[i]);
        }
        fprintf(fp," \n",age[i]);
        fprintf(fp," \n",tel[i]);
      }
    i++;
  }
}
