#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int sortearMovimento() {
    return rand() % 5 + 1;
}
int atualizarPosicao(int posicao, int movimento) {
    if (movimento == 1) {
        posicao += 1;
    } else if (movimento == 2) {
        posicao += 2;
    } else if (movimento == 4) {
        posicao -= 1;
    } else if (movimento == 5) {
        posicao -= 2;
    }
    if (posicao < 0) {
        posicao = 0;
    }
    return posicao;
}
int main() {
    srand((unsigned int)time(0));
    int posicaoHamster1 = 0;
    int posicaoHamster2 = 0;
    int turno = 0;
    printf("A corrida dos hamsters começou!\n");
    while (posicaoHamster1 < 12 && posicaoHamster2 < 12) {
        turno++;
        printf("Turno %d:\n", turno);
        int movimentoHamster1 = sortearMovimento();
        int movimentoHamster2 = sortearMovimento();
        posicaoHamster1 = atualizarPosicao(posicaoHamster1, movimentoHamster1);
        posicaoHamster2 = atualizarPosicao(posicaoHamster2, movimentoHamster2);
        printf("Hamster 1 está na posição: %d\n", posicaoHamster1);
        printf("Hamster 2 está na posição: %d\n", posicaoHamster2);
        if (posicaoHamster1 >= 12 && posicaoHamster2 >= 12) {
            printf("Empate! Ambos os hamsters chegaram à posição 12 no mesmo turno.\n");
            break;
        } else if (posicaoHamster1 >= 12) {
            printf("Hamster 1 é o vencedor!\n");
            break;
        } else if (posicaoHamster2 >= 12) {
            printf("Hamster 2 é o vencedor!\n");
            break;
        }
    }
    return 0;
}
