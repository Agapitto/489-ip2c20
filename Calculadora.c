#include <stdio.h>

int main (void) {
    int num1 = 0;
    int num2 = 0;
    int suma = 0;
    int resta = 0;
    int multiplicaci�n = 0;
    int divisi�n = 0;
    int resto = 0;

    suma = num1 + num2;
    resta = num1 - num2;
    multiplicaci�n = num1 * num2;
    divisi�n = num1 / num2;
    resto = num1 % num2;
    printf("Suma: ", suma);

    scanf("%i", &num1);

    return 0;
}
