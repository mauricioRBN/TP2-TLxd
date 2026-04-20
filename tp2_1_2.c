#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){ 
    srand(time(NULL));
    #define N 20
    int i;
    double vt[N];
    double *p=vt;

    for(i = 0;i<N; i++){
        p[i]=1+rand()%100;
        printf("%d - %.2f \n",i,p[i]);
    }
}