#include <stdio.h> //Se agregaron dos librerias
#include <stdlib.h>
#define N 5 
#define M 7 
int main(){ //Se agrego la función principal
    int i,j; //Se modifico el nombre de tipo de variable
    int mt[N][M];
    int *punteroMt = &mt[0][0];
    for(i = 0;i<N; i++) 
    {  
        for(j = 0;j<M; j++) 
        { 
            *(punteroMt + i * M + j)=1+rand()%100; 
            printf("%d   ", *(punteroMt + i * M + j)); //Se cambio el tipo de comillas
        } 
    printf("\n"); 
    } 
    return 0;
}
