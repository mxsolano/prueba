#include <stdio.h>

void calcularNumerosTriangulares() {
    int n;
    for (n = 1; n <= 100; n++) {
        int numeroTriangular = (n * (n + 1)) / 2;
        printf("%d ", numeroTriangular);
    }
    printf("\n");
}

int main() {
    printf("Los primeros 100 numeros triangulares son:\n");
    calcularNumerosTriangulares();
    return 0;
}