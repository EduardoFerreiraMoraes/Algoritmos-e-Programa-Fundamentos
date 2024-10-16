#include <stdio.h>
int main() {
    float tempo, total = 0, maior = 0;
    int diaMaior = 0;
    for (int i = 1; i <= 7; i++) {
        printf("Digite o tempo de exercício no dia %d (minutos): ", i);
        scanf("%f", &tempo);
        total += tempo;
        if (tempo > maior) {
            maior = tempo;
            diaMaior = i;
        }
    }
    printf("Total de tempo exercitado na semana: %.2f minutos\n", total);
    printf("Média diária: %.2f minutos\n", total / 7);
    printf("Dia com maior tempo de exercício: Dia %d (%.2f minutos)\n", diaMaior, maior);
    return 0;
}
