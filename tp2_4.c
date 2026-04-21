#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//---struct---
struct compu{
    int velocidad; // Velocidad de procesamiento en GHz (valor entre 1 y 3)
    int anio; // Año de fabricación (valor entre 2015 y 2024)
    int cantidad_nucleos; // Cantidad de núcleos (valor entre 1 y 8)
    char *tipo_cpu; // Tipo de procesador (apuntador a cadena de caracteres)
};
//---funciones---
void listarPCs(struct compu pcs[], int cantidad);
//---main---
int main(){
    srand(time(NULL));
    struct compu pc[5];
    int i;
    char tipos[6][10] = {"Intel", "AMD", "Celeron", "Athlon", "Core","Pentium"};
    for(i=0;i < 5;i++){
        pc[i].velocidad=rand()%3 + 1;
        pc[i].anio=rand()%10+2015;
        pc[i].cantidad_nucleos=rand()%8 + 1;
        int indice; //tipo de cpu
        indice= rand()%6;
        pc[i].tipo_cpu=tipos[indice];
    }
    listarPCs(pc,5);
}
//---desarrollo-de-funciones---
void listarPCs(struct compu pcs[], int cantidad){
    for(int i=0;i<cantidad;i++){
        printf("----  PC %d  ----\n",i+1);
        printf("CPU: %s\n",pcs[i].tipo_cpu);
        printf("Velocidad: %d GHz\n",pcs[i].velocidad);
        printf("Anio: %d\n",pcs[i].anio);
        printf("Nucleos: %d\n ",pcs[i].cantidad_nucleos);

    }
}