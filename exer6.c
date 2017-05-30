#include<stdio.h>

#define M_ACCOUNT 15
#define M_CLIENT 10

typedef struct Contas{
  int n_account;
  float balance;
}conta;

typedef struct Cliente{
  char name[50];
  int age;
  char adress[50];
  int q_account;
  conta contas[M_ACCOUNT];
}cliente;

cliente clientes[M_CLIENT];

void menu();
int register1(int q_accounts_cli[]);
void view(int account, int q_accounts_cli[M_CLIENT]);

int main(){
  int ch;
  int accounts;
  int q_accounts_cli[M_CLIENT];

  do{
    menu();
    scanf("%d", &ch);
    switch(ch){
      case 1: accounts = register1(q_accounts_cli); printf("numero de contas = %d\n",accounts); break;
      case 2: view(accounts,q_accounts_cli); break;
    }
  }while(ch!=0);
}

void menu(){
  puts("1 - Customer registration and account");
  puts("2 - View all accounts");
}

int register1(int q_accounts_cli[]){
  int i=0;
  int cho;
  puts("CUSTOMER REGISTRATION AND ACCOUNT - AMERICA BANK");
  //register of account
  do{
    puts("Type your name"); getchar();
    fgets(clientes[i].name,50,stdin);
    puts("Type your age");
    scanf("%d", &clientes[i].age);
    puts("Type your adress"); getchar();
    fgets(clientes[i].adress,50,stdin);
    puts("How many account you are?");
    scanf("%d", &clientes[i].q_account);
    q_accounts_cli[i] = clientes[i].q_account;
    while(clientes[i].q_account>=15){
        puts("Invalid number");
        scanf("%d", &clientes[i].q_account);
      }
    //register of costumer
    if(clientes[i].q_account>=1){
      int j;
      for(j=0; j<clientes[i].q_account; j++){
        printf("Type the number of account %d\n", j+1);
        scanf("%d", &clientes[i].contas[i].n_account);
        puts("Type your balance");
        scanf("%f", &clientes[i].contas[i].balance);
      }
    }
    puts("Do you want to register another customer? 1 = Yes 2 = No");
    scanf("%d", &cho);
    if(cho==1){
      i++;
      printf("valor i %d\n", i);
    }
  }while(cho==1);
  printf("valor de retorno do i %d\n", i+1);
  return i+1;
}

void view(int account, int q_accounts_cli[M_CLIENT]){
  int i,j;
  for(i=0;i<account;i++){
    printf("Account %d\n", i+1);
    printf("Name: %s\n", clientes[i].name);
    printf("Age: %d\n", clientes[i].age);
    printf("Adress: %s\n", clientes[i].adress);
    for(j=0; j<q_accounts_cli[i];j++){
      printf("Account %d\n", j+1);
      printf("Number account: %d\n", clientes[i].contas[j].n_account);
      printf("Balance: %f\n", clientes[i].contas[j].balance);
    }
  }
}
