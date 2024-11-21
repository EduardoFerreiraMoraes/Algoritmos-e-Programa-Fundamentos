//Criar um vetor de 10 números v e inicialize-o sorteando valores de 10 a 90 para cada elemento.
//Depois disso, implemente algoritmos para:
//a. Imprimir o vetor
//b. Verificar se existe o valor 50 neste vetor (apenas dizer se encontrou ou não)
//c. Verificar o número de ocorrências do valor 50 neste vetor.
//d. Calcular a média dos valores do vetor
//e. Encontrar o maior e o menor valor dos elementos do vetor.
//f. Imprimir a soma e o produto acumulado dos valores dos elementos do vetor
//g. Imprimir o vetor em ordem inversa
//h. Copiar os elementos em ordem inversa para outro vetor.
//i. Crie outros dois vetores com 10 elementos, vPares e vImpares. Copie para vPares todos os
//elementos pares e para vImpares todos os elementos ímpares. Depois disso, imprima o
//conteúdo de vPares e vImpares (OBS.: guarde o número de pares e ímpares para poder
//acessar os vetores depois.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAMANHO_VETOR 10
int main() {
    srand(time(NULL));
    int v[TAMANHO_VETOR];
    for (int i = 0; i < TAMANHO_VETOR; i++) {
        v[i] = rand() % 81 + 10;
    }
    printf("Vetor: ");
    for (int i = 0; i < TAMANHO_VETOR; i++) {
        printf("%d ", v[i]);
    }
    printf("\n");
    int encontrado = 0;
    for (int i = 0; i < TAMANHO_VETOR; i++) {
        if (v[i] == 50) {
            encontrado = 1;
            break;
        }
    }
    if (encontrado) {
        printf("Valor 50 encontrado no vetor.\n");
    } else {
        printf("Valor 50 não encontrado no vetor.\n");
    }
    int ocorrencias = 0;
    for (int i = 0; i < TAMANHO_VETOR; i++) {
        if (v[i] == 50) {
            ocorrencias++;
        }
    }
    printf("Número de ocorrências do valor 50: %d\n", ocorrencias);
    int soma = 0;
    for (int i = 0; i < TAMANHO_VETOR; i++) {
        soma += v[i];
    }
    float media = (float)soma / TAMANHO_VETOR;
    printf("Média dos valores: %.2f\n", media);
    int maior = v[0], menor = v[0];
    for (int i = 1; i < TAMANHO_VETOR; i++) {
        if (v[i] > maior) maior = v[i];
        if (v[i] < menor) menor = v[i];
    }
    printf("Maior valor: %d\n", maior);
    printf("Menor valor: %d\n", menor);
    int produto = 1;
    for (int i = 0; i < TAMANHO_VETOR; i++) {
        soma += v[i];
        produto *= v[i];
    }
    printf("Soma acumulada: %d\n", soma);
    printf("Produto acumulado: %d\n", produto);
    printf("Vetor invertido: ");
    for (int i = TAMANHO_VETOR - 1; i >= 0; i--) {
        printf("%d ", v[i]);
    }
    printf("\n");
    int v_invertido[TAMANHO_VETOR];
    for (int i = 0; i < TAMANHO_VETOR; i++) {
        v_invertido[i] = v[TAMANHO_VETOR - 1 - i];
    }
    printf("Vetor copiado em ordem inversa: ");
    for (int i = 0; i < TAMANHO_VETOR; i++) {
        printf("%d ", v_invertido[i]);
    }
    printf("\n");
    int vPares[TAMANHO_VETOR], vImpares[TAMANHO_VETOR];
    int qtdPares = 0, qtdImpares = 0;
    for (int i = 0; i < TAMANHO_VETOR; i++) {
        if (v[i] % 2 == 0) {
            vPares[qtdPares++] = v[i];
        } else {
            vImpares[qtdImpares++] = v[i];
        }
    }
    printf("Vetor de Pares: ");
    for (int i = 0; i < qtdPares; i++) {
        printf("%d ", vPares[i]);
    }
    printf("\n");
    printf("Vetor de Ímpares: ");
    for (int i = 0; i < qtdImpares; i++) {
        printf("%d ", vImpares[i]);
    }
    printf("\n");

    return 0;
}
