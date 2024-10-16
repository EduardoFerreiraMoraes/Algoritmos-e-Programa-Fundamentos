#include <stdio.h>
unsigned long long calcular_fatorial(int n) {
    unsigned long long fatorial = 1;
    for (int i = 2; i <= n; i++) {
        fatorial *= i;
    }
    return fatorial;
}
int main() {
    int numero;
    char continuar;
    do {
        printf("Entre com um número: ");
        scanf("%d", &numero);
        if (numero < 0) {
            printf("Por favor, insira um número inteiro positivo.\n");
        } else {
            unsigned long long resultado = calcular_fatorial(numero);
            printf("O fatorial de %d é %llu\n", numero, resultado);
        }
        printf("Calcular outro número (s/n)? ");
        scanf(" %c", &continuar);
    } while (continuar == 's' || continuar == 'S');
    return 0;
}