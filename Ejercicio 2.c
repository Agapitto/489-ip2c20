#include<stdio.h>
// A: Dado un array de enteros devolver los valores únicos.
// B: Con el mismo array, contar las repeticiones de los valores.

void main (){
    // 29
    int arr[] = {1,2,1,3,4,5,1,1,2,3,5,6,1,7,2,4,7,9,2,4,6,7,3,1,3,6,7,7,2};
    int aux = 0;
    int cont = 0;

    for (int x; x < 29; x++) {
        cont += aux == arr[x] ? 1 : 0;
        /*
            += ---> cont + cont
            if(aux == arr[x]){
                cont++;
        }
        */
    }
    printf("Conteo %i, %i", arr[0], cont);


    return;
}
