#include <stdio.h>
int main() {
    int meses;
    float populacao_inicial;
    printf("Digite o número de meses: ");
    scanf("%d", &meses);
    printf("Digite a população inicial da colmeia: ");
    scanf("%f", &populacao_inicial);
    float populacao_atual = populacao_inicial;
    for (int i = 1; i <= meses; i++) {
        populacao_atual *= 2;
        populacao_atual -= populacao_atual * 0.03;
        printf("População ao final do mês %d: %.2f\n", i, populacao_atual);
    }
    return 0;
}
