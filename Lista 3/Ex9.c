#include <stdio.h>
int main()
{
    int opcao;
    float n, r;
    printf("Qual moeda voce seja converter?\n");
    printf("1 - Converter de Real para Euro \n");
    printf("2 - Converter de Real para Dólar \n");
    printf("3 - Converter de Euro para Dólar \n");
    printf("4 - Converter de Euro para Real \n");
    printf("5 - Converter de Dólar para Euro \n");
    printf("6 - Converter de Dólar para Real \n");
    scanf(" %d", &opcao);
    if (opcao < 1 || opcao > 6) {
        printf("ERRO!!! Opção inválida.\n");
    } else {
        printf("Digite o valor a ser convertido: \n");
        scanf("%f", &n);

        switch(opcao) {
            case 1:
                r = n * 0.163;
                printf("Valor em Euro: %.2f\n", r);
                break;
            case 2:
                r = n * 0.20;
                printf("Valor em Dólar: %.2f\n", r);
                break;
            case 3:
                r = n * 1.22; 
                printf("Valor em Dólar: %.2f\n", r);
                break;
            case 4:
                r = n * 6.13; 
                printf("Valor em Real: %.2f\n", r);
                break;
            case 5:
                r = n * 0.82; 
                printf("Valor em Euro: %.2f\n", r);
                break;
            case 6:
                r = n * 5.0; 
                printf("Valor em Real: %.2f\n", r);
                break;
        }
    }

    return 0;
}