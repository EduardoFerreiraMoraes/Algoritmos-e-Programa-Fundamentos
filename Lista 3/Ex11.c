#include <stdio.h>
int main() {
    int valor, quantidade;
    printf("Informe um valor em reais: R$ ");
    scanf("%d", &valor);
    if (valor < 0) {
        printf("Valor inválido! Por favor, insira um valor positivo.\n");
        return 1;
    }
    if (valor >= 100) {
        quantidade = valor / 100;
        printf("%d nota(s) de R$ 100.\n", quantidade);
        valor %= 100;
    }
    if (valor >= 50) {
        quantidade = valor / 50;
        printf("%d nota(s) de R$ 50.\n", quantidade);
        valor %= 50;
    }
    if (valor >= 20) {
        quantidade = valor / 20;
        printf("%d nota(s) de R$ 20.\n", quantidade);
        valor %= 20;
    }
    if (valor >= 10) {
        quantidade = valor / 10;
        printf("%d nota(s) de R$ 10.\n", quantidade);
        valor %= 10;
    }
    if (valor >= 5) {
        quantidade = valor / 5;
        printf("%d nota(s) de R$ 5.\n", quantidade);
        valor %= 5;
    }
    if (valor >= 1) {
        quantidade = valor / 1;
        printf("%d nota(s) de R$ 1.\n", quantidade);
    }
    return 0;
}
