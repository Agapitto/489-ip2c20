#include <stdio.h>



void potencia(int n1) {
    int resultado;
    resultado = n1 * n1;
    printf("El cuadrado del número es: %i", resultado); // 100
}

int sumar(int num1, int num2) {
    int resultado = 0;
    resultado = num1+ num2;
    return resultado; // resultado int
}


int multiplicar(int num1, int num2) {
    int resultado;
    resultado = num1 * num2;
    //printf("Resultado de la multiplicación: %i", resultado);
    return resultado;
}


int main() {
    int num1, num2, num3 = 0;
    int resultadoSuma,resultadoMultiplicacion = 0 ;
    printf("Ingresá el primer número: ");
    scanf("%i",&num1); // -1
    printf("Ingresá el segundo número");
    scanf("%i",&num2); // 3
    printf("Ingresá el tercer número");
    scanf("%i",&num3); // 2
    resultadoSuma = sumar(num1,num2); // 5
    resultadoMultiplicacion = multiplicar(resultadoSuma,num3); // 5 * 2 // 10
    potencia(resultadoMultiplicacion); // 10
    return 0;

}

