#include<stdio.h>
#include<string.h>

#define MAX_CONTAS 5
typedef struct Contas{
  int n_con;
  char nome[50];
  float saldo;
}contas;

contas conta[MAX_CONTAS];

void menu();
void cadastrar(int q_conta);
void visualizar(int q_conta);
void inf_maior(int q_conta);
void inf_menor(int q_conta);
void excluir(contas *ptr, int kill, int q_conta);

int main(){
  int i,j,cho,q_conta,kill;
  printf("%d\n", sizeof(struct Contas));
  do{
    menu();
    scanf("%d", &cho);
    switch(cho){
      case 1: puts("Quantas contas quer cadastrar?"); scanf("%d", &q_conta); cadastrar(q_conta); break;
      case 2: visualizar(q_conta); break;
      case 3: inf_maior(q_conta); break;
      case 4: inf_menor(q_conta); break;
      case 5: printf("Qual conta deseja exluir? (1 - %d)\n", q_conta); scanf("%d", &kill); excluir(&conta[kill-1],kill,q_conta); break;
      case 0: break;
    }
  }while(cho!=0);
}

void menu(){
  puts("MENU");
  puts("1 - Cadastrar uma conta");
  puts("2 - Visualizar todas as contas");
  puts("3 - Mostrar as informações da conta com maior saldo");
  puts("4 - Mostrar informações da conta com menor saldo");
  puts("5 - Excluir uma conta");
  puts("0 - Sair");
  puts("Digite uma opção");
}

void cadastrar(int q_conta){
  int i,j;
  for(i=0; i<q_conta; i++){
    puts("Digite seu nome");
    getchar();
    gets(conta[i].nome);
    puts("Digite o número da conta");
    scanf("%d", &conta[i].n_con);
    for(j=0; j<MAX_CONTAS;j++){
        if(i==j)
          j++;
        if(conta[j].n_con==conta[i].n_con){
          printf("Esse número de conta ja existe\nDigite outro número\n");
          scanf("%d", &conta[i].n_con);
          j=-1;
        }
      }
    puts("Digite seu saldo");
    scanf("%f", &conta[i].saldo);
  }
}

void visualizar(int q_conta){
  int i;
  for(i=0; i<q_conta; i++){
    printf("Conta %d\n", i+1);
    printf("Cliente = %s\n", conta[i].nome);
    printf("Número da conta = %d\n", conta[i].n_con);
    printf("Saldo da conta = %.2f\n", conta[i].saldo);
    putchar('\n');
  }
}

void inf_maior(int q_conta){
  int i;
  int aux;
  int maior_saldo = conta[0].saldo;
  for(i=0,aux=0; i<q_conta; i++){
    if(conta[i].saldo>maior_saldo){
      maior_saldo = conta[i].saldo;
      aux = i;
    }
  }
  printf("Conta de maior saldo %d\n", aux+1);
  printf("Cliente = %s\n", conta[aux].nome);
  printf("Número da conta = %d\n", conta[aux].n_con);
  printf("Saldo da conta = %.2f\n", conta[aux].saldo);
}

void inf_menor(int q_conta){
  int i;
  int aux;
  int menor_saldo = conta[0].saldo;
  for(i=0,aux=0; i<q_conta; i++){
    if(conta[i].saldo<menor_saldo){
      menor_saldo = conta[i].saldo;
      aux = i;
    }
  }
  printf("Conta de menor saldo %d\n", aux+1);
  printf("Cliente = %s\n", conta[aux].nome);
  printf("Número da conta = %d\n", conta[aux].n_con);
  printf("Saldo da conta = %.2f\n", conta[aux].saldo);
}

void excluir (contas *ptr, int kill, int q_conta){
    kill-=1;
    while(kill<q_conta){
      ptr->n_con=(ptr+1)->n_con;
      strcpy(ptr->nome,(ptr+1)->nome);
      ptr->saldo=(ptr+1)->saldo;
    kill++;
    ptr++;
  }
  //ptr=NULL;
}
