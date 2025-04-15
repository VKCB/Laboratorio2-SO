#Programa recursivo para calcular factorial en lenguaje C

#include <stdio.h>

long long factorial(int n) {
    if (n <= 1)
        return 1;
    else
        return n * factorial(n - 1);
}

int main() {
    int num;
    printf("Introduce un número: ");
    scanf("%d", &num);
    printf("Factorial de %d es %lld\n", num, factorial(num));
    return 0;
}
