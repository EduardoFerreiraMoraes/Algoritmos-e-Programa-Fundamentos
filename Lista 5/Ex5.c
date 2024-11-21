//Uma empresa está monitorando o consumo de água em uma residência ao longo de um mês (30
//dias). Para agilizar o preenchimento dos dados, faça o sorteio de valores entre 100 e 500 litros por
//dia. Escreva um programa que:
//a. Sorteie e armazene o consumo diário de água (em litros) em um vetor.
//b. Calcule o consumo total do mês.
//c. Calcule a média de consumo diário.
//d. Imprima o dia em que houve o maior consumo e o menor consumo de água.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    
    srand(time(NULL));

    int consumodiario[30];
    int totalconsumo = 0;
    int maiorconsumo = 0, menorconsumo = 500; 
    int diamaiorconsumo = 0, diamenorconsumo = 0;
    for (int i = 0; i < 30; i++) {
        consumodiario[i] = rand() % 401 + 100;
        totalconsumo += consumodiario[i];
        if (consumodiario[i] > maiorconsumo) {
            maiorconsumo = consumodiario[i];
            diamaiorconsumo = i + 1;
        }
        if (consumodiario[i] < menorconsumo) {
            menorconsumo = consumodiario[i];
            diamenorconsumo = i + 1;
        }
    }
    double mediaconsumo = totalconsumo / 30.0;
    printf("Consumo diário de água (litros):\n");
    for (int i = 0; i < 30; i++) {
        printf("Dia %d: %d litros\n", i + 1, consumodiario[i]);
    }
    printf("\nConsumo total do mês: %d litros\n", totalconsumo);
    printf("Média de consumo diário: %.2f litros\n", mediaconsumo);
    printf("O maior consumo foi no dia %d com %d litros.\n", diamaiorconsumo, maiorconsumo);
    printf("O menor consumo foi no dia %d com %d litros.\n", diamenorconsumo, menorconsumo);
    return 0;
}
