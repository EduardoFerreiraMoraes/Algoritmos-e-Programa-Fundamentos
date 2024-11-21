//Faça um programa para testar se um dado é viciado. Faça o lançamento N vezes (N é um número
//lido pelo usuário, pode ser um número bem grande), armazene cada valor que for sorteado em um
//array com 6 posições e ao final imprima o percentual do resultado de cada face.


#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int N; 
    int faces[6] = {0}; 
    srand(time(NULL));
    printf("Digite o número de lançamentos: ");
    scanf("%d", &N);
    for (int i = 0; i < N; i++) {
        int resultado = rand() % 6;
        faces[resultado]++; 
    }
    printf("\nPercentual de cada face do dado:\n");
    for (int i = 0; i < 6; i++) {
        double percentual = (faces[i] * 100.0) / N;
        printf("Face %d: %.2f%%\n", i + 1, percentual);
    }
    return 0;
}
