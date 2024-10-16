#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void nova_simulacao() {
    int populacao, taxa_crescimento, num_ciclos;
    printf("População inicial: ");
    scanf("%d", &populacao);
    printf("Taxa de crescimento (percentual): ");
    scanf("%d", &taxa_crescimento);
    printf("Número de ciclos: ");
    scanf("%d", &num_ciclos);
    for (int ciclo = 1; ciclo <= num_ciclos; ciclo++) {
        int nova_populacao = populacao + (populacao * taxa_crescimento / 100);
        int impacto = 0;
        char condicao[50] = "Nenhuma condição.";
        int sorteio = rand() % 100 + 1;
        if (sorteio <= 5) {
            impacto = -50 * nova_populacao / 100;
            sprintf(condicao, "Radiação Ultravioleta!");
        } else if (sorteio <= 15) {
            impacto = -30 * nova_populacao / 100;
            sprintf(condicao, "Alta Temperatura!");
        } else if (sorteio <= 30) {
            impacto = -25 * nova_populacao / 100;
            sprintf(condicao, "Falta de Nutrientes!");
        } else if (sorteio <= 40) {
            impacto = -20 * nova_populacao / 100;
            sprintf(condicao, "Excesso de Umidade!");
        } else if (sorteio <= 50) {
            impacto = 20 * nova_populacao / 100;
            sprintf(condicao, "Condição Favorável!");
        }
        nova_populacao += impacto;
        if (nova_populacao < 0) {
            nova_populacao = 0;
        }
        populacao = nova_populacao;
        if (impacto != 0) {
            printf("Ciclo %d: População = %d (%s)\n", ciclo, populacao, condicao);
        } else {
            printf("Ciclo %d: População = %d\n", ciclo, populacao);
        }
        if (populacao == 0) {
            printf("A população morreu. Simulação encerrada.\n");
            break;
        }
    }
    printf("Simulação concluída. População final: %d\n", populacao);
}
int main() {
    srand(time(NULL));
    int opcao;
    do {
        printf("1 - Nova Simulação\n");
        printf("2 - Sair do Programa\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);
        switch (opcao) {
            case 1:
                nova_simulacao();
                break;
            case 2:
                printf("Saindo do programa...\n");
                break;
            default:
                printf("Opção inválida! Tente novamente.\n");
        }
    } while (opcao != 2);

    return 0;
}
