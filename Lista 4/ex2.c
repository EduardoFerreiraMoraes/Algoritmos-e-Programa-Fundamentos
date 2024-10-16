#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int numeroSorteado, palpite, tentativas = 3;
    srand(time(NULL));
    numeroSorteado = rand() % 10 + 1;

    printf("Adivinhe o número entre 1 e 10. Você tem %d tentativas.\n", tentativas);

    for (int i = 0; i < tentativas; i++) {
        printf("Tentativa %d: ", i + 1);
        scanf("%d", &palpite);

        if (palpite == numeroSorteado) {
            printf("Parabéns! Você acertou o número.\n");
            return 0;
        } else if (palpite < numeroSorteado) {
            printf("O número está acima.\n");
        } else {
            printf("O número está abaixo.\n");
        }
    }
    printf("Você esgotou suas tentativas. O número era %d.\n", numeroSorteado);
    return 0;
}
