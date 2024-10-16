#include <stdio.h>
int main() {
    char nomes[5][100];
    char temp[100]; 
    printf("Digite 5 nomes:\n");
    for (int i = 0; i < 5; i++) {
        printf("Nome %d: ", i + 1);
        scanf("%s", nomes[i]);
    }
    for (int i = 0; i < 5; i++) {
        for (int j = i + 1; j < 5; j++) {
            int k = 0;
            while (nomes[i][k] != '\0' && nomes[j][k] != '\0') {
                if (nomes[i][k] > nomes[j][k]) {
                    for (int m = 0; nomes[i][m] != '\0'; m++) {
                        temp[m] = nomes[i][m];
                    }
                    temp[99] = '\0';
                    for (int m = 0; nomes[j][m] != '\0'; m++) {
                        nomes[i][m] = nomes[j][m];
                    }
                    nomes[j][99] = '\0';
                    for (int m = 0; temp[m] != '\0'; m++) {
                        nomes[j][m] = temp[m];
                    }
                    break;
                } else if (nomes[i][k] < nomes[j][k]) {
                    break;
                }
                k++;
            }
        }
    }
    printf("\nNomes em ordem alfabética:\n");
    for (int i = 0; i < 5; i++) {
        printf("%s\n", nomes[i]);
    }
    return 0;
}
