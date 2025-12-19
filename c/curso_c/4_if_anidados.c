#include <stdio.h>

int main(){
    float calificacion;

    printf("calificacion: ");
    scanf("%f", &calificacion);

    if (calificacion<0 || calificacion >10){
        printf("Error: Dato irreal");
    }else{
        if(calificacion < 8){
            printf("Reprobado");

        } else if (calificacion < 10){
            printf("Aprobado");
        }else if (calificacion == 10){
            printf ("Excelencia");
        }
    }

    return 0;
}