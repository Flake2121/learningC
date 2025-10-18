#include <stdio.h>
#include <gmp.h>

int main() {
    mpz_t base, exponent, result;

    int ex1;
    int ex2;
    int ex3;

    printf("Enter base: ");
    scanf("%d", &ex1);
    printf("Enter first exponent: ");
    scanf("%d", &ex2);
    printf("Enter second exponent: ");
    scanf("%d", &ex3);

    mpz_init_set_ui(base, ex1);      
    mpz_init_set_ui(exponent, ex2);  
    // ^^^^
    mpz_init(result);
   
    mpz_pow_ui(exponent, exponent, ex3); 
    // ^^^^

    mpz_pow_ui(result, base, mpz_get_ui(exponent));

    FILE *file = fopen("result.txt", "w");
    if (file == NULL) {
        perror("Unable to open file");
        return 1;
    }

    gmp_fprintf(file, "%Zd\n", result);

    fclose(file);


    mpz_clear(base);
    mpz_clear(exponent);
    mpz_clear(result);

    return 0;
}
