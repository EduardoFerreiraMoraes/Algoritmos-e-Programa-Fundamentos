#include <stdio.h>

int main() {
    int i;
    float num, soma = 0, media;

    for (i = 0; i < 15; i++) {
        printf("Digite o %dº número: ", i + 1);
        scanf("%f", &num);
        soma += num;
    }

    media = soma / 15;

    printf("Soma: %.2f\n", soma);
    printf("Média: %.2f\n", media);

    return 0;
}
