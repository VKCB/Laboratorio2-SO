#include <stdio.h>
#include <gmp.h>

void factorial(mpz_t result, unsigned int n) {
    mpz_set_ui(result, 1);
    for (unsigned int i = 2; i <= n; i++) {
        mpz_mul_ui(result, result, i);
    }
}

int main() {
    unsigned int num;
    printf("Introduce un número: ");
    scanf("%u", &num);

    mpz_t result;
    mpz_init(result);

    factorial(result, num);

    gmp_printf("Factorial de %u es %Zd\n", num, result);

    mpz_clear(result);
    return 0;
}

