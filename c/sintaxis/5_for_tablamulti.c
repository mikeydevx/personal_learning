#include <stdio.h>

int main(){

    int tabla;
    int i;

    printf("tabla: ");
    scanf ("%d", &tabla);

    for(i=1; i<=10; i++){
        int resultado= tabla * i;
        printf("%d * %d = %d \n", tabla, i, resultado);
    }

    return 0; 
}