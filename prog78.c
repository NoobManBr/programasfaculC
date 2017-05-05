#include<stdio.h>

void calc(int *v, int num, int *xmin, int *xmax);

int main(){
    int v[10];

    int num,i;
    srand(time(0));
    for(i=0; i<10; i++){
        v[i]=rand()%10 +1;
        printf("%d ", v[i]);
    }
    putchar('\n');
    int *xmin = &v[0], *xmax = &v[0];
    //printf("%d - %d\n", *xmin,*xmax);
    puts("Digite o seu limite de números");
    scanf("%d", &num);
    calc(v,num,*xmin,*xmax);
}

void calc(int *v, int num, int *xmin, int *xmax){
    int i,j;

    for(i=0;i<num;i++){ //maior número
        for(j=0; j<num; j++)
            if(v[j]>v[i])
                xmax=&v[j];
    }
    for(i=0;i<num;i++){ //menor número
        for(j=0; j<num; j++)
            if(v[j]<v[i])
                xmin=&v[j];
    }
    //printf("%d - %d\n", *xmax, *xmin);
    printf("O maior dos %d números é %d\n", num,*xmax);
    printf("O menor dos %d números é %d\n", num,*xmin);
}
