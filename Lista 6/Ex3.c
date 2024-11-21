//Matriz identidade, na matemática, também conhecida como matriz 𝐼 ou matriz unitária, é uma
//matriz quadrada em que a diagonal principal contém apenas elementos 1 (um) e todos os outros
//elementos são 0 (zero). Crie uma função que gere uma matriz identidade 4x4.
#include <stdio.h>

void gerar_matriz_identidade(int matriz[4][4]) {

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            if (i == j) {
                matriz[i][j] = 1;  
            } else {
                matriz[i][j] = 0;
            }
        }
    }
}
void imprimir_matriz(int matriz[4][4]) {
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}
int main() {
    int matriz[4][4];
    gerar_matriz_identidade(matriz);
    printf("Matriz Identidade 4x4:\n");
    imprimir_matriz(matriz);
    return 0;
}
