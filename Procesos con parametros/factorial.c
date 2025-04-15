#include <stdio.h>
#include <sys/time.h>
#include <gmp.h>

void calcular_factorial(int n) {
    mpz_t resultado;
    mpz_init_set_ui(resultado, 1);  // Inicializa el resultado a 1

    for (int i = 2; i <= n; i++) {
        mpz_mul_ui(resultado, resultado, i);  // resultado *= i
    }

    gmp_printf("Factorial de %d es: %Zd\n", n, resultado);
    mpz_clear(resultado);  // Limpia la memoria
}

int main() {
    int num;
    printf("Introduce un número: ");
    scanf("%d", &num);

    // Medición de tiempo
    struct timeval inicio, fin;
    gettimeofday(&inicio, NULL);

    calcular_factorial(num);

    gettimeofday(&fin, NULL);

    long segundos = fin.tv_sec - inicio.tv_sec;
    long micros = fin.tv_usec - inicio.tv_usec;
    if (micros < 0) {
        micros += 1000000;
        segundos -= 1;
    }

    printf("Tiempo de ejecución: %ld.%06ld segundos\n", segundos, micros);

    return 0;
}


