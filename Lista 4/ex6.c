#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
    int valores[5];
    int menor, maior;
    float soma = 0;
    srand(time(NULL));
    for (int i = 0; i < 5; i++) {
        valores[i] = rand() % 101;
        soma += valores[i];
    }
    menor = maior = valores[0];
    for (int i = 1; i < 5; i++) {
        if (valores[i] < menor) {
            menor = valores[i];
        }
        if (valores[i] > maior) {
            maior = valores[i];
        }
    }
    float media = soma / 5;
    printf("Valores sorteados: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", valores[i]);
    }
    printf("\nMenor valor: %d\n", menor);
    printf("Maior valor: %d\n", maior);
    printf("Média dos valores: %.2f\n", media);
    return 0;
}