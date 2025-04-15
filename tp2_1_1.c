#include <stdio.h> //Se agregaron dos librerias
#include <stdlib.h>
#define N 20 
int main(){ //Se agrego la función main
    int i; 
    double vt[N]; 
    for(i = 0;i<N; i++) 
    {  
        vt[i]=1+rand()%100; 
        printf("%.2f\n", vt[i]); //Se cambio el tipo de comilla, se limitaron a dos decimales las variables tipo float y se agrego un salto de linea
    }
    return 0; 
}
