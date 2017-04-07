#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void menu(){
  puts("1 - O total de vendas do mês");
  puts("2 - A soma de todas as vendas da primeira semana de cada mês");
  puts("3 - Total vendido no ano");

}
void gerar(int matriz[12][4]){
  int i,j;
  for(i=0; i<12; i++){
    printf("%d - ", i+1);
    for(j=0; j<4; j++){
      matriz[i][j] = rand()%100;
      printf("%d ", matriz[i][j]);
    }
  putchar('\n');
  }
}

void total_mes(int matriz[12][4],int mes){
  int sem,soma;
  for(mes=mes-1,soma=0,sem=0; sem<4; sem++)
    soma +=  matriz[mes][sem];
    printf("O total de vendas do mês é %d\n", soma);
}

void prim_sem(int matriz[12][4]){
  int i,j,soma;
  for(i=0,soma=0; i<12; i++)
    for(j=0; j<1; j++)
      soma+=matriz[i][j];
  printf("A soma de todas as vendas de primeira semana de cada mês é %d\n", soma);
}

void total_ano(int matriz[12][4]){
  int i,j,soma;
  for(i=0,soma=0; i<12; i++)
    for(j=0; j<4; j++)
    soma+=matriz[i][j];
  printf("O total vendido no ano é %d\n", soma);
}

int main(){
  int matriz[12][4];
  int mes,escolha;
  srand(time(0));

  gerar(matriz);
  menu();
  scanf("%d", &escolha);
  switch(escolha){
    case 1: puts("Digite o mês que você deseja saber a soma das vendas / 1 - 12");
      scanf("%d", &mes);
      total_mes(matriz,mes); break;
    case 2: prim_sem(matriz); break;
    case 3: total_ano(matriz); break;
  }


}
