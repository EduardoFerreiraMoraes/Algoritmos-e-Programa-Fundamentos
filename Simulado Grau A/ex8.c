#include <stdio.h>
int main() {
    float chuva, total = 0, maior = 0;
    int diaMaior = 0;
    for (int i = 1; i <= 7; i++) {
        printf("Digite a quantidade de chuva no dia %d (mm): ", i);
        scanf("%f", &chuva);
        total += chuva;
        if (chuva > maior) {
            maior = chuva;
            diaMaior = i;
        }
        if (chuva < 5.0) {
            printf("Alerta de seca no dia %d: %.2f mm de chuva\n", i, chuva);
        }
    }
    printf("Total de chuva acumulada: %.2f mm\n", total);
    printf("Dia com maior quantidade de chuva: Dia %d (%.2f mm)\n", diaMaior, maior);
    return 0;
}
