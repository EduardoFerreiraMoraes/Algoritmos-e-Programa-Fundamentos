#include <stdio.h>
#define MAX_ALUNOS 100
int main() {
    int n, i;
    float grauA, grauB, grauC, media, mediaGeral = 0;
    int alunosAprovados = 0;
    printf("Digite o número de alunos: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        printf("Aluno %d:\n", i + 1);
        printf("Digite a nota do grau A: ");
        scanf("%f", &grauA);
        printf("Digite a nota do grau B: ");
        scanf("%f", &grauB);
        media = (grauA + grauB) / 2;
        printf("Média: %.2f\n", media);
        if (media >= 7.0) {
            printf("APROVADO\n");
            alunosAprovados++;
        } else {
            printf("Digite a nota do grau C: ");
            scanf("%f", &grauC);
            char substituto;
            printf("Qual grau deve ser substituído (A ou B)? ");
            scanf(" %c", &substituto);
            if (substituto == 'A' || substituto == 'a') {
                media = (grauC + grauB) / 2;
            } else if (substituto == 'B' || substituto == 'b') {
                media = (grauA + grauC) / 2;
            } else {
                printf("Grau inválido! A média permanece a mesma.\n");
            }
            printf("Nova Média: %.2f\n", media);
            if (media >= 7.0) {
                printf("APROVADO\n");
                alunosAprovados++;
            } else {
                printf("REPROVADO\n");
            }
        }
        mediaGeral += media;
    }
    mediaGeral /= n;
    printf("Média geral dos alunos: %.2f\n", mediaGeral);
    return 0;
}