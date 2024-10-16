#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
    srand(time(0));
    int opcao;
    int sorteio;
    printf("Escolha um Dado:\n");
    printf("1 - D4 \n");
    printf("2 - D6 \n");
    printf("3 - D8 \n");
    printf("4 - D10 \n");
    printf("5 - D12 \n");
    printf("6 - D16 \n");
    scanf(" %d", &opcao);
    if (opcao<1 || opcao>6)
    {
        printf("ERRO!!!\n");
    }
    else 
    {
        switch(opcao) {
            case 1:
                sorteio = 1 + rand() % 4;
                break;
            case 2:
                sorteio = 1 + rand() % 6;
                break;
            case 3:
                sorteio = 1 + rand() % 8;
                break;
            case 4:
                sorteio = 1 + rand() % 10;
                break;
            case 5:
                sorteio = 1 + rand() % 12;
                break;
            case 6:
                sorteio = 1 + rand() % 16;
                break;
        }
        printf("O resultado do dado é: %d\n", sorteio);
    }

    return 0;
}