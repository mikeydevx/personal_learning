#include <stdio.h>

int main(){

    int dias;
    float beca;
    char grupo;

    printf("Que grupo: ");
    scanf("%c", &grupo);
    printf("Cuantos dias faltan: ");
    scanf ("%d", &dias);
    printf("Cuanto es la beca: ");
    scanf ("%f", &beca);


    printf("El grupo %c tiene %d dias para la beca de %f", grupo, dias, beca);

    return 0;

}
