#include <stdio.h> // conjunto de funciones


void cargar(int numeros[3]) {

    int x;
    for(x = 0; x < 3; x++) {
        printf("Carga el numero %i", x);
        scanf("%i",&numeros[x]); // 1 [4,8,10]
    }

}

int main() {
    int numeros[3];
    cargar(numeros);
    return 0;
}

