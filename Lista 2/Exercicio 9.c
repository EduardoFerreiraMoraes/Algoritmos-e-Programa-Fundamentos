#include<stdio.h>

int main()
{
    int geladeira, torradeira, cama;
    float preçogeladeira = 1499.99, preçotorradeira = 32.49, preçocama = 599.99;
    float totalsemdesconto, totalcomdesconto;
    printf("Quantas geladeiras foram vendidas hoje: ");
    scanf("%d", &geladeira);
    printf("Quantas torradeiras foram vendidas hoje: ");
    scanf("%d", &torradeira);
    printf("Quantas camas foram vendidas hoje: ");
    scanf("%d", &cama);
    totalsemdesconto = (preçogeladeira * geladeira) + (preçotorradeira * torradeira) + (preçocama * cama);
    totalcomdesconto = totalsemdesconto * 0.85;
    printf("Total arrecadado hoje sem desconto: %.2f \n", totalsemdesconto);
    printf("Total arrecadado hoje com desconto de 15%%: %.2f \n", totalcomdesconto);
    return 0;
}