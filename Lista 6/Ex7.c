//Faça um programa que gere uma matriz de inteiros 5x5 e que transforme os números negativos
//em positivos e vice-versa. 

#include <stdio.h>
#include <stdlib.h>

int main() {
    int matriz[5][5];

    printf("Digite os elementos da matriz 5x5:\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            matriz[i][j] = -matriz[i][j];
        }
    }
    printf("\nMatriz após inverter os sinais:\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    return 0;
}
