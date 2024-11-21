//Faça um programa que leia 5 valores para dentro de um vetor e imprima o resultado de cada
//valor multiplicado pela sua posição no vetor. Por exemplo: 1, 2, 3, 4 e 5 imprimirá na tela 0, 2, 6,
//12 e 20.

#include <stdio.h>

int main() {
    int vetor[5];
    int i;
    printf("Digite 5 valores:\n");
    for(i = 0; i < 5; i++) {
        printf("Valor %d: ", i+1);
        scanf("%d", &vetor[i]);
    }
    printf("\nResultados:\n");
    for(i = 0; i < 5; i++) {
        printf("Valor na posição %d: %d\n", i, vetor[i] * i);
    }
    return 0;
}
