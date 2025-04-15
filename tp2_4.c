#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char tipos[6][10] = {"Intel", "AMD", "Celeron", "Athlon", "Core", "Pentium"}; 

struct compu {
 int velocidad; // Velocidad de procesamiento en GHz (valor entre 1 y 3)
 int anio; // Año de fabricación (valor entre 2015 y 2024)
 int cantidad_nucleos; // Cantidad de núcleos (valor entre 1 y 8)
 char *tipo_cpu; // Tipo de procesador (apuntador a cadena de caracteres)
};

// Genero aleatoriamente los datos
void generarAleatoriamenteLosDatos(struct compu PCs[], int tamano){
    for (int i = 0; i < tamano; i++)
    {
        PCs[i].velocidad=rand()%3+1; //Genera valores del 1-3
        PCs[i].anio=rand()%10+2015; //Genera valores del 2015-2024
        PCs[i].cantidad_nucleos=rand()%8+1; //Genera valores del 1-8
        PCs[i].tipo_cpu=tipos[rand()%6]; //Genera valores del 0-6
    }
}

void MostrarDatos(struct compu PCs[], int tamano){
    for (int i = 0; i < tamano; i++)
    {
        printf("PC %d\n",i+1);
        printf("Velocidad: %d\n",PCs[i].velocidad);
        printf("Anio: %d\n",PCs[i].anio);
        printf("Cantidad de nucleos: %d\n",PCs[i].cantidad_nucleos);
        printf("Tipo de PC: %s\n",PCs[i].tipo_cpu);
        printf("\n");
    }
        
}

int main (){
    srand(time(NULL));
    int tamanoDelArreglo=5;
    struct compu PCs[tamanoDelArreglo];
    generarAleatoriamenteLosDatos(PCs, tamanoDelArreglo);
    MostrarDatos(PCs, tamanoDelArreglo);
    return 0;
}