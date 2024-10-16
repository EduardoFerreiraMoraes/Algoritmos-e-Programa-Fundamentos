#include <stdio.h>

int main()
{
    int a,b,c,totalac,totalab;
    printf("Digite uma valor que deseje somar:");
    scanf (" %d", &a);
    printf("Digite uma valor que deseje somar:");
    scanf (" %d", &b);
    printf("Digite uma valor que deseje somar:");
    scanf (" %d", &c);
    totalab=a+b;
    totalac=a+c;
    if (a >=b ){
        printf ("A soma A + B (%d) é menor que A + C (%d).\n", totalab, totalac);
    }
    else{
        printf ("A soma A + B (%d) não é menor que A + C (%d).\n" , totalab, totalac);
    }

    return 0;
}
