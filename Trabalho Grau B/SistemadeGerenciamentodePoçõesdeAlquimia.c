#include <stdio.h>
#include <string.h>

char ingredientes[7][30] = {
    "Pó de Fênix", 
    "Essência Celestial", 
    "Raiz de Dragão", 
    "Orvalho Lunar", 
    "Flores secas", 
    "Elixir amargo", 
    "Lágrimas de unicórnio"
};
int quantidadesIngredientes[7] = {100, 50, 45, 30, 200, 20, 15};
char poções[5][30] = {
    "Poção de Cura", 
    "Poção Força da Floresta", 
    "Poção Sabedoria da Riqueza", 
    "Poção Sorte no Amor", 
    "Poção Malvada"
};
int ingredientesNecessarios[5][7] = {
    {30, 20, 20, 10, 0, 0, 0},
    {0, 0, 30, 20, 30, 0, 0}, 
    {50, 30, 0, 0, 0, 0, 0}, 
    {0, 0, 0, 10, 50, 5, 0}, 
    {0, 0, 15, 0, 0, 10, 0} 
};
int consultarIngredientes(int numIngredientes) {
    printf("Ingredientes Disponíveis:\n");
    for (int i = 0; i < numIngredientes; i++) {
        printf("%d. %s: %d\n", i + 1, ingredientes[i], quantidadesIngredientes[i]);
    }
    return 0;
}
int prepararPocao(int numIngredientes, int numPoções) {
    int escolha;
    printf("Escolha uma poção para preparar:\n");
    for (int i = 0; i < numPoções; i++) {
        printf("%d. %s\n", i + 1, poções[i]);
    }
    printf("Digite o número da poção: ");
    scanf("%d", &escolha);
    escolha--;
    int ingredientesFaltando = 0;
    printf("Verificando ingredientes...\n");
    for (int i = 0; i < 7; i++) {
        int quantidadeNecessaria = ingredientesNecessarios[escolha][i];
        if (quantidadeNecessaria > 0) {
            if (quantidadesIngredientes[i] < quantidadeNecessaria) {
                ingredientesFaltando = 1;
                printf("Ingrediente em falta: %s, necessário %d, disponível %d\n", 
                    ingredientes[i], quantidadeNecessaria, quantidadesIngredientes[i]);
            }
        }
    }
    if (ingredientesFaltando) {
        printf("Não foi possível preparar a poção devido à falta de ingredientes.\n");
    } else {
        for (int i = 0; i < 7; i++) {
            int quantidadeNecessaria = ingredientesNecessarios[escolha][i];
            if (quantidadeNecessaria > 0) {
                quantidadesIngredientes[i] -= quantidadeNecessaria;
            }
        }
        printf("Poção criada com sucesso!\n");
        consultarIngredientes(numIngredientes);
    }

    return 0;
}
int reabastecerIngrediente(int numIngredientes) {
    int escolha, quantidadeAdicionada;
    printf("Escolha o ingrediente para reabastecer:\n");
    for (int i = 0; i < numIngredientes; i++) {
        printf("%d. %s: %d\n", i + 1, ingredientes[i], quantidadesIngredientes[i]);
    }
    printf("Digite o número do ingrediente: ");
    scanf("%d", &escolha);
    escolha--;
    printf("Digite a quantidade a ser adicionada a %s: ", ingredientes[escolha]);
    scanf("%d", &quantidadeAdicionada);

    quantidadesIngredientes[escolha] += quantidadeAdicionada;
    printf("Ingrediente reabastecido! Nova quantidade de %s: %d\n", ingredientes[escolha], quantidadesIngredientes[escolha]);

    return 0;
}
int lerInteiroValido() {
    int valor;
    while (scanf("%d", &valor) != 1) {
        printf("Entrada inválida. Digite um número válido: ");
        while (getchar() != '\n');
    }
    return valor;
}

int main() {
    int escolha;
    while (1) {
        printf("\nMenu:\n");
        printf("1. Consultar Ingredientes Disponíveis\n");
        printf("2. Preparar Poção\n");
        printf("3. Reabastecer Ingredientes\n");
        printf("4. Sair\n");
        printf("Escolha uma opção: ");
        escolha = lerInteiroValido();
        switch (escolha) {
            case 1:
                consultarIngredientes(7);
                break;
            case 2:
                prepararPocao(7, 5);
                break;
            case 3:
                reabastecerIngrediente(7);
                break;
            case 4:
                printf("Saindo do programa...\n");
                return 0;
            default:
                printf("Opção inválida. Tente novamente.\n");
        }
    }
    return 0;
}
