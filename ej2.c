#include <stdio.h>

int factorial(int n) {
    int i = 1;
    while (n > 1) {
        i = i * n;
        n = n - 1;
    }
    return i;
}

int main() {
    int num;
    printf("Ingrese un numero para calcular su factorial: ");
    scanf("%d", &num);

    int resultado = factorial(num);
    printf("%d! = %d\n", num, resultado);

    return 0;
}
