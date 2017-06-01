#include<stdio.h>
#include<string.h>

void menu();
int insert(FILE *fp, int names[10][50], int age[10], int tel[10]);


int main(){
  char names[10][50];
  int age[10],tel[10],cho;
  int i,j,control;
  FILE *fp;

  do{
    menu();
    scanf("%d", &cho);
    switch (cho) {
      case 1: control = insert(fp,names,age,tel); break;
      case 3: view(fp,names,age,tel,control); break;
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

int insert(FILE *fp, int names[10][50], int age[10], int tel[10]){
  int lim,i;
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
  return lim;
}

int view(FILE *fp, int names[10][50], int age[10], int tel[10], int control){
  int i;
  fp = fopen("Agenda.txt", "r");
    for(i=0;i<control;i++){
      fscanf(fp,"%s\n",names[i]);
      printf("Name: %d\n", names[i]);
      fscanf(fp, "%d\n", &age[i]);
      printf("Age: %d", age[i]);
      fscanf(fp,"%d\n", &tel[i]);
      printf("Telephone: %d\n", tel[i]);
    }
  fclose(fp);
}
