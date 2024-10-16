#include <stdio.h>
int main()
{
    int escolha;
    float valor,total;
    printf("Qual o valor pago por um produto?\n");
    scanf("%f", &valor);
    printf("Digete : 1 - À vista em dinheiro\n");
    printf("Digete : 2 - À vista no cartão de crédito\n");
    printf("Digete : 3 - 2 vezes\n");
    printf("Digete : 4 - 3 vezes\n");
    scanf("%d",&escolha);
    switch (escolha){
        
        case 1:
        total=valor*0.85;
        printf("Você pagará: R$ %.2f (À vista em dinheiro)\n", total);
        break;
        
        case 2:
        total=valor*0.90;
        printf("Você pagará: R$ %.2f (À vista no cartão de crédito)\n",total);
        break;
        case 3:
        total=valor;
        printf("Você pagará: R$ %.2f (2 vezes)\n",total);
        break;
        case 4:
        total=valor*1.10;
        printf("Você pagará: R$ %.2f (3 vezes)\n",total);
        break;
        default:
        printf("Condição de pagamento inválida!\n");
        break;
    }
    return 0;
}
