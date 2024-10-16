#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
    int numero, palpite;
    srand(time(NULL));
    numero = rand() % 100 + 1;
    do {
        printf("Tente adivinhar o número (entre 1 e 100): ");
        scanf("%d", &palpite);
        if (palpite > numero) {
            printf("Muito alto!\n");
        } else if (palpite < numero) {
            printf("Muito baixo!\n");
        } else {
            printf("Correto! O número era %d.\n", numero);
        }
    } while (palpite != numero);
    return 0;
}
