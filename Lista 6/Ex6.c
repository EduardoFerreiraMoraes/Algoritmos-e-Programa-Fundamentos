//Gere uma matriz 10x3 que contenha valores de notas de 10 alunos (cada linha contém a
//informação das notas de um aluno). Para isso, sorteie valores entre 0.0 e 10.0 na primeira e
//segunda colunas, e na terceira, calcule a média da Unisinos considerando as notas anteriores
//como nota do Grau A e do Grau B.
//Exemplo (matriz com informação de 3 alunos):
//Grau A Grau B Grau Parcial
//7,5 6,7 7,0
//4,0 7,1 6,1
//8,5 10,0 9,5

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));
    int num_alunos = 10;
    float matriz[num_alunos][3];
    for (int i = 0; i < num_alunos; i++) {
        matriz[i][0] = (float)rand() / RAND_MAX * 10.0;
        matriz[i][1] = (float)rand() / RAND_MAX * 10.0;

        matriz[i][2] = (matriz[i][0] + matriz[i][1]) / 2.0;
    }

    printf("Notas dos alunos (Grau A, Grau B, Grau Parcial):\n");
    for (int i = 0; i < num_alunos; i++) {
        printf("Aluno %d: %.2f  %.2f  %.2f\n", i + 1, matriz[i][0], matriz[i][1], matriz[i][2]);
    }
    return 0;
}