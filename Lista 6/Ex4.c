//Escreva um algoritmo que preenche uma matriz 4x6 com valores inteiros aleatórios entre -10 e
//10. Calcule as somas:
//a. dos elementos da segunda linha
//b. dos elementos da quinta coluna
//c. da multiplicação dos elementos da primeira linha pelos elementos da quarta linha
//d. dos elementos só das colunas com índices pares
//e. dos elementos só das linhas com índices ímpares

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int** preencher_matriz(int linhas, int colunas) {
    int** matriz = (int**)malloc(linhas * sizeof(int*));  
    for (int i = 0; i < linhas; i++) {
        matriz[i] = (int*)malloc(colunas * sizeof(int));  
        for (int j = 0; j < colunas; j++) {
            matriz[i][j] = rand() % 21 - 10;  
        }
    }
    return matriz; 
}

int imprimir_matriz(int** matriz, int linhas, int colunas) {
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            printf("%3d ", matriz[i][j]);
        }
        printf("\n");
    }
    return 0; }

int soma_segunda_linha(int** matriz, int colunas) {
    int soma = 0;
    for (int j = 0; j < colunas; j++) {
        soma += matriz[1][j];  
    }
    return soma;
}

int soma_quinta_coluna(int** matriz, int linhas) {
    int soma = 0;
    for (int i = 0; i < linhas; i++) {
        soma += matriz[i][4]; 
    }
    return soma;
}

int soma_multiplicacao_linhas(int** matriz, int colunas) {
    int soma = 0;
    for (int j = 0; j < colunas; j++) {
        soma += matriz[0][j] * matriz[3][j];  
    }
    return soma;
}

int main() {

    srand(time(NULL));

    int linhas = 4, colunas = 6;

    int** matriz = preencher_matriz(linhas, colunas);

    printf("Matriz gerada:\n");
    imprimir_matriz(matriz, linhas, colunas);

    printf("\nSoma dos elementos da segunda linha: %d\n", soma_segunda_linha(matriz, colunas));
    printf("Soma dos elementos da quinta coluna: %d\n", soma_quinta_coluna(matriz, linhas));
    printf("Soma da multiplicação dos elementos da primeira linha pelos elementos da quarta linha: %d\n", soma_multiplicacao_linhas(matriz, colunas));

    for (int i = 0; i < linhas; i++) {
        free(matriz[i]);
    }
    free(matriz);
    return 0;
}
