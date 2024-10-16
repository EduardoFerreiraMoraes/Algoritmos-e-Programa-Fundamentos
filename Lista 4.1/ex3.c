#include <stdio.h>
int main() {
    int numero;
    char continuar;
    do {
        printf("Entre com um número (1 a 9): ");
        scanf("%d", &numero);
        if (numero < 1 || numero > 9) {
            printf("Número inválido! Por favor, insira um número entre 1 e 9.\n");
            continue;
        }
        for (int i = 1; i <= 10; i++) {
            printf("%d x %d = %d\n", numero, i, numero * i);
        }
        printf("Calcular outro número (s/n)? ");
        scanf(" %c", &continuar);
    } while (continuar == 's' || continuar == 'S'); 
    return 0;
}
