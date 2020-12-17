#include<stdio.h>

void main () {

    int num[5] = {1, 2, 3, 4, 5}; // declaramos el vector de 5 posiciones
    int sumaTotal = 0;
    int resultado = 0;
    int res = 0;

    //num[0] = 1; // ingreso a la posicion , con indice 0 y lo cargo con 1.
    //num[1] = 2;
    //num[2] = 3; // ...
    //num[3] = 4;
    //num[4] = 5; // ...

    /*
    for(int x = 0; x < 5; x++) {
        num[x] = x+1;
        printf("Por favor ingrese el valor que ira en el indice: %i\n", x);
        scanf("%i", &num[x]);
    }
    */

    // Calcular el promedio (sumaTotal / cantTotal) --> 15 / 5 = 3

    for(int y = 0; y < 5; y++) {
        /*printf("Vector: %i\n", num[y]);*/
        sumaTotal = sumaTotal + num[y];
        res = sumaTotal / (y+1); // se tiene que ejecutar cuando termine de recorrer el vector
    }
    printf("Resultado: %i", res);

    return;
}

