#include<stdio.h>

int main()
{
    int camisetas, calças, cintos;
    float preçocamisetas = 25.00, preçocalças = 100, preçocintos = 40.00;
    float totalsemdesconto, totalcomdesconto,desconto;
    printf("Quantas camisetas foram vendidas hoje: ");
    scanf("%d", &camisetas);
    printf("Quantas calças foram vendidas hoje: ");
    scanf("%d", &calças);
    printf("Quantas cintos foram vendidas hoje: ");
    scanf("%d", &cintos);
    totalsemdesconto = (preçocamisetas * camisetas) + (preçocalças * calças) + (preçocintos * cintos);
    totalcomdesconto = totalsemdesconto * 0.90;
    desconto = totalsemdesconto - totalcomdesconto;
    printf("Total arrecadado hoje sem desconto:R$ %.2f \n", totalsemdesconto);
    printf("Total arrecadado hoje com desconto de 10%% avista:R$ %.2f \n", totalcomdesconto);
    printf("Voce economizou:R$%.2f\n",desconto);
    return 0;
}