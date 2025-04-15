#include <stdio.h> 
#include <stdlib.h>
#define N 20 
int main(){ 
    int i; 
    double vt[N];
    double *punteroVt=vt; 
    for(i = 0;i<N; i++) 
    {  
        *(punteroVt+1)=1+rand()%100; 
        printf("%.2f\n", *(punteroVt+1));
    }
    return 0; 
}