//Em um jogo com 5 rodadas e 4 jogadores, cada jogador começa com 0 pontos. Escreva um
//programa que:
//a. Crie um vetor de 4 elementos, onde cada posição do vetor representa a pontuação
//acumulada de um jogador.
//b. A cada rodada, sorteie a pontuação para cada jogador (valores entre 0 e 100).
//c. Atualize o vetor de pontuação acumulada com a soma da pontuação de cada rodada.
//d. Ao final de cada rodada, verifique se algum jogador fez mais de 80 pontos e exiba uma
//mensagem de "Rodada de Destaque" para esse jogador.
//e. Ao final das 5 rodadas, exiba a pontuação total de cada jogador.
//f. Informe qual jogador venceu, ou se houve empate (o jogador com a maior pontuação).

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int pontos[4] = {0}; 
    int pontosRodada[4]; 
    int i, j;
    int vencedor = 0;

    int numJogadores = 4;
    int numRodadas = 5;

    srand(time(NULL));

    for (i = 0; i < numRodadas; i++) {
        printf("\nRodada %d:\n", i + 1);

        for (j = 0; j < numJogadores; j++) {
            pontosRodada[j] = rand() % 101;
            pontos[j] += pontosRodada[j];
        }

        for (j = 0; j < numJogadores; j++) {
            printf("Jogador %d fez %d pontos nesta rodada.\n", j + 1, pontosRodada[j]);
            if (pontosRodada[j] > 80) {
                printf("Jogador %d fez uma Rodada de Destaque!\n", j + 1);
            }
        }
    }

    printf("\nPontuação final após 5 rodadas:\n");
    for (i = 0; i < numJogadores; i++) {
        printf("Jogador %d: %d pontos\n", i + 1, pontos[i]);
    }

    int maxPontos = pontos[0];
    for (i = 1; i < numJogadores; i++) {
        if (pontos[i] > maxPontos) {
            maxPontos = pontos[i];
            vencedor = i;
        } else if (pontos[i] == maxPontos) {
            vencedor = -1;
        }
    }
    if (vencedor == -1) {
        printf("\nHouve um empate entre os jogadores com a maior pontuação.\n");
    } else {
        printf("\nO vencedor foi o Jogador %d com %d pontos.\n", vencedor + 1, maxPontos);
    }
    return 0;
}
