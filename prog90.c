#include<stdio.h>

#define MAX_CON 10

typedef struct Contatos{
  char name[50];
  int age;
  int tel;
} Contato;

Contato contatos[MAX_CON];

void menu();
void insert(FILE *fp, Contato *ptr);

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
      case 1: insert(fp,&contatos); break;
      case 2: edit(fp,&contatos); break;
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

void insert(FILE *fp, Contato *ptr){
  int i,lim;
  fp = fopen("Agenda.txt", "a+");
    puts("How many contacts you want to insert?");
    scanf("%d", &lim);
    for(i=0;i<lim;i++){
      puts("Type a name");
      getchar();
      gets((ptr+i)->name);
      fprintf(fp,"%s\n",(ptr+i)->name);
      puts("Type a age");
      scanf("%d", &(ptr+i)->age);
      fprintf(fp,"%d\n",(ptr+i)->age);
      puts("Type a number of telephone");
      scanf("%d", &(ptr+i)->tel);
      fprintf(fp,"%d\n",(ptr+i)->tel);
    }
  fclose(fp);
}

int edit(FILE *fp, Contato *ptr){
  int i=0,t;
  char str[50];
  fp = fopen("Agenda.txt", "r+");
    puts("Which contact you want to edit?");
    getchar();
    gets(str);
    while(!feof(fp)){
      fscanf(fp,"%s\n",(ptr+1)->name);
      t = strlen((ptr+1)->name);
      printf("%d\n",t);
      if(strcmp(str,(ptr+1)->name)==0){
        fseek(fp,-1*(t+1), SEEK_CUR);
        printf("%d", ftell(fp));
        puts("Type a name");
        fflush(stdin);
        gets((ptr+1)->name);
        fprintf(fp,"%s\n",(ptr+1)->name);
        puts("Type a age");
        scanf("%d", &(ptr+1)->age);
        fprintf(fp,"%d\n",(ptr+1)->age);
        puts("Type a number of telephone");
        scanf("%d", &(ptr+1)->tel);
        fprintf(fp,"%d",(ptr+1)->tel);
      }
    i++;
    }
    fclose(fp);
}
