#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int numeros[20];
    int positivos = 0, negativos = 0;
    srand(time(NULL)); 
    for (int i = 0; i < 20; i++) {
        numeros[i] = rand() % 21 - 10; 
        if (numeros[i] > 0) {
            printf("%d: POSITIVO\n", numeros[i]);
            positivos++;
        } else if (numeros[i] < 0) {
            printf("%d: NEGATIVO\n", numeros[i]);
            negativos++;
        } else {
            printf("%d: NULO\n", numeros[i]);
        }
    }

    printf("Quantidade de números positivos: %d\n", positivos);
    printf("Quantidade de números negativos: %d\n", negativos);

    return 0;
}
