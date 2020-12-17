#include<stdio.h>

int main ()

{
/*
    int valor = 0;
    int res = 0;

    do {
        printf("\nIngrese Valor: ");
        scanf("%i", &valor);
        res = valor + res;

    }while (res <= 9999);
    printf("%i", &res);
    return 0;
*/

    int acc = 0; // acumular la suma de los valores ingresados
    int valor = 0; // valor ingresado

    printf("Ingrese el valor a sumar: ");
    scanf("%i", &valor);

    while(valor != 9999) {
        printf("Ingrese el valor a sumar: ");
        scanf("%i", &valor); // 9999
        if(valor != 9999) {
            acc += valor; // acc + acc + valor;
        }
    }

    printf("Resultado de la suma: %i", acc);

    return 0;
}
