#include<stdio.h>

int main()
{
    int count; // declaro una variable tipo int -> tamaño por el tipo de dato
    float dec; // decimal
    char letra; // caracter
    int resta = 0;
    int valor1 = 50;
    int valor2 = 24;

    resta = valor1 - valor2;
    printf("Suma: %i\n", resta);

    scanf("%i", &valor1);

    printf("VALOR1: %i", valor1);
/*
    count = 0; // inicialice en 0
    letra = 'c';
    dec = 3.92;

    printf("hola mundo");
    printf("\n"); // alt + 92
    printf("%c",letra);
    printf("\n");
    printf("%i",count);
*/
    return 0;

}
