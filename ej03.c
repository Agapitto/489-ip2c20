#include<stdio.h>

    // 1 �rea de un cuadrado = L*L = L al cuadrado
    // 2 perimetro de un cuadrado = 4*L
    // 3 area de un tri�ngulo = L elevado al cuadrado dividido 2

int main()
{
    //ej 2 - PER�METRO DE UN CUADRADO
    int res = 0;
    int lado = 0;

    lado = 19;

    // verificar si lado es positivo, xq?
    // Cuadrado hay una restricci�n -> lado > 0

    //Si el lado es mayor a 0 ejecutar bloque TRUE
    //SINO (else) ejecutar bloque FALSE

    if(lado > 0){ // operadores logicos
        res = 4 * lado;
        printf("%i", res);
    } else {
        printf("ERROR LADO DEBE SER MAYOR QUE 0");
    }

} //76 es la respuesta a "lado = 19"
