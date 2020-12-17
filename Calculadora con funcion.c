#include <stdio.h> // print f y scan f
#include <stdbool.h> // booleanos

int sumar(int primerValor, int segundoValor){
  return primerValor + segundoValor;
}
int restar(int primerValor, int segundoValor) {
    return primerValor - segundoValor;
}
int multiplicar(int primerValor, int segundoValor) {
    return primerValor * segundoValor;
}
int dividir(int primerValor, int segundoValor) {
    return primerValor / segundoValor;
}
int factorial(int valor) { // recursividad de factorial
    if (valor == 1) return 1;
    return factorial(valor-1) * valor;
}
int fibonacci(int valor) { // recursividad de fibonacci
    if (valor == 1) return 0;
    if (valor == 2) return 1;
    return fibonacci(valor - 2) + fibonacci(valor - 1);
}

int main(void) {

  bool quiereSeguir = 1;
  int seguir;

  while (quiereSeguir == 1){

  int valor1, valor2, resultado, operacion;

  printf("Ingrese el primer valor\n");
  scanf("%i",&valor1);

  printf("Ingrese el segundo valor\n");
  scanf("%i", &valor2);

  printf("Qué operacion quiere realizar? (ingrese número)\n");
  printf("(1)sumar, (2)restar, (3)multiplicar, (4)dividir, (5)factorial o (6)fibonacci\n");
  scanf("1, 2, 3, 4, 5", &operacion);

  scanf("%i", &operacion);

/*
  if(operacion == 1) {
    resultado = sumar(valor1,valor2);
  }
  if(operacion == 2) {
    resultado = restar(valor1, valor2);
  }
  if(operacion == 3) {
    resultado = multiplicar(valor1, valor2);
  }
  if(operacion == 4) {
    resultado = dividir(valor1, valor2);
  }
*/
  switch(operacion) {
case 1:
    resultado = sumar(valor1, valor2);
    printf("El resultado de la suma es %i\n", resultado);
    break;
case 2:
    resultado = restar(valor1, valor2);
    printf("El resultado de la resta es %i\n", resultado);
    break;
case 3:
    resultado = multiplicar(valor1, valor2);
    printf("El resultado de la multiplicación es %i\n", resultado);
    break;
case 4:
    resultado = dividir(valor1, valor2);
    printf("El resultado de la división es %i\n", resultado);
    break;
case 5:
    resultado = factorial(valor1);
    printf("El resultado del factorial es %i\n", resultado);
    break;
case 6:
    resultado = fibonacci(valor1);
    printf("El resultado de fibonacci es %i\n", resultado);
    break;
default:
    break;
    }
  printf("Desea realizar otra operación? (1)Si, (2)No\n");
  scanf("%i", &seguir);

  if(seguir == 1) {
    quiereSeguir = true;
  }
  if(seguir == 2){
    quiereSeguir = false;
  }
  }
  return 0;
}
