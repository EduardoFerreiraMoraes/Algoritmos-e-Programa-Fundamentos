#include <stdio.h>
int main() {
    int numero;
    int total_numeros = 0;
    int positivos = 0;
    int negativos = 0;
    int divisiveis_por_2 = 0;
    int divisiveis_por_5 = 0;
    printf("Digite um número inteiro (0 para encerrar): ");
    while (1) {
        scanf("%d", &numero);
        if (numero == 0) {
            break;
        }
        total_numeros++;

        if (numero > 0) {
            positivos++;
        } else if (numero < 0) {
            negativos++;
        }

        if (numero % 2 == 0) {
            divisiveis_por_2++;
        }
        if (numero % 5 == 0) {
            divisiveis_por_5++;
        }
        printf("Digite um número inteiro (0 para encerrar): ");
    }
    if (total_numeros > 0) {
        float porcentagem_positivos = (positivos / (float)total_numeros) * 100;
        float porcentagem_negativos = (negativos / (float)total_numeros) * 100;
        float porcentagem_divisiveis_por_2 = (divisiveis_por_2 / (float)total_numeros) * 100;
        float porcentagem_divisiveis_por_5 = (divisiveis_por_5 / (float)total_numeros) * 100;
        printf("Porcentagem de números positivos: %.2f%%\n", porcentagem_positivos);
        printf("Porcentagem de números negativos: %.2f%%\n", porcentagem_negativos);
        printf("Porcentagem de números divisíveis por 2: %.2f%%\n", porcentagem_divisiveis_por_2);
        printf("Porcentagem de números divisíveis por 5: %.2f%%\n", porcentagem_divisiveis_por_5);
    } else {
        printf("Nenhum número foi digitado.\n");
    }

    return 0;
}
