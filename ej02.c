#include<stdio.h>

int main()
{
    int res = 0;
    int valor1;
    int valor2;

    printf("Hola, ingrese un valor: ");
    scanf("%i", &valor1); //18

    printf("\nAhora ingrese el siguiente valor, debe ser mayor que el anterior: ");
    scanf("%i", &valor2); //4

    res = valor2 - valor1;
    printf("%i", res);

    // area de un cuadrado = L*L = L al cuadrado
    // perimetro de un cuadrado = 4*L
    // area de un triángulo = L al cuadrado dividido 2

    return 0;
}
