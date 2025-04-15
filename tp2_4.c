struct compu {
 int velocidad; // Velocidad de procesamiento en GHz (valor entre 1 y 3)
 int anio; // Año de fabricación (valor entre 2015 y 2024)
 int cantidad_nucleos; // Cantidad de núcleos (valor entre 1 y 8)
 char *tipo_cpu; // Tipo de procesador (apuntador a cadena de caracteres)
};
#include <stdio.h>
#include <stdlib.h>
int main (){
    int tamanoDelArreglo=5;
    // Genero aleatoriamente los datos
    int *punteroVelocidad = (int *)malloc(tamanoDelArreglo*sizeof(int));
    for (int i = 0; i < tamanoDelArreglo; i++)
    {
        punteroVelocidad[i]=rand()%3+1; //Cargo valores del 1-3
    }
    int *punteroAnio = (int *)malloc(tamanoDelArreglo*sizeof(int));
    for (int i = 0; i < tamanoDelArreglo; i++)
    {
        punteroAnio[i]=rand()%10+2015; //Cargo valores del 2015-2024
    }
    int *punteroCantidadDeNucleos = (int *)malloc(tamanoDelArreglo*sizeof(int));
    for (int i = 0; i < tamanoDelArreglo; i++)
    {
        punteroCantidadDeNucleos[i]=rand()%8+1; //Cargo valores del 1-8
    }
    // Muestro por pantalla los datos
    for (int i = 0; i < tamanoDelArreglo; i++)
    {
        printf("Vector[%d]=%d",i,punteroVelocidad[i]);
        printf("\n");
    }
    for (int i = 0; i < tamanoDelArreglo; i++)
    {
        printf("Vector[%d]=%d",i,punteroAnio[i]);
        printf("\n");
    }
    for (int i = 0; i < tamanoDelArreglo; i++)
    {
        printf("Vector[%d]=%d",i,punteroCantidadDeNucleos[i]);
        printf("\n");
    }
    // Libero memoria
    free(punteroVelocidad);
    free(punteroAnio);
    free(punteroCantidadDeNucleos);
    return 0;
}