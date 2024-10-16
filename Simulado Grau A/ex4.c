#include <stdio.h>
int main() {
    float umidade;
    for (int i = 1; i <= 5; i++) {
        printf("Digite a umidade do solo para o sensor %d: ", i);
        scanf("%f", &umidade);
        if (umidade < 30.0) {
            printf("Irrigação ativada pelo sensor %d (Umidade: %.2f%%)\n", i, umidade);
        }
    }

    return 0;
}
