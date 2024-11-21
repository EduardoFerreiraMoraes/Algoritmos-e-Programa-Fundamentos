//Uma pessoa está monitorando quantos passos ela dá por dia em uma semana. Escreva um
//programa que:
//a. Leia e armazene o número de passos dados em cada um dos 7 dias da semana.
//b. Calcule o total de passos dados na semana.
//c. Calcule a média diária de passos.
//d. Verifique se a pessoa conseguiu atingir a meta de 10.000 passos em algum dos dias. Se sim,
//informe quais dias a meta foi alcançada.

#include <stdio.h>

int main() {
    int passos[7];
    int total_passos = 0; 
    float media_passos;
    int meta = 0; 
    printf("Digite o número de passos dados em cada um dos 7 dias da semana:\n");
    for (int i = 0; i < 7; i++) {
        printf("Dia %d: ", i + 1);
        scanf("%d", &passos[i]);
        total_passos += passos[i];
    }
    media_passos = total_passos / 7.0;
    printf("\nMeta de 10.000 passos alcançada nos seguintes dias:\n");
    for (int i = 0; i < 7; i++) {
        if (passos[i] >= 10000) {
            printf("Dia %d: %d passos\n", i + 1, passos[i]);
            meta++;
        }
    }
    printf("\nTotal de passos na semana: %d\n", total_passos);
    printf("Média diária de passos: %.2f\n", media_passos);
    if (meta == 0) {
        printf("A meta de 10.000 passos não foi alcançada em nenhum dia.\n");
    }
    return 0;
}
