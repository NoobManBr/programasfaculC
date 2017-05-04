#include<stdio.h>

void calc(int *v, int num, int *xmin, int *xmax);

int main(){
    int v[10];
    int xmin,xmax,num,i;
    srand(time(0));
    for(i=0; i<10; i++){
        v[i]=rand()%10 +1;
        printf("%d ", v[i]);
    }

}
