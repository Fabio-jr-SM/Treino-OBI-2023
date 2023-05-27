#include <stdio.h>
#include <string.h>

int main() {
    char cartas[157];
    fgets(cartas, sizeof(cartas), stdin);
    cartas[strcspn(cartas, "\n")] = '\0'; // Remover o caractere de nova linha

    int naipes[4][13] = {0}; // Matriz para contar as cartas em cada naipe

    int i;
    for (i = 0; i < strlen(cartas); i += 3) {
        int valor = (cartas[i] - '0') * 10 + (cartas[i + 1] - '0');
        char naipe = cartas[i + 2];

        int naipeIndex;
        switch (naipe) {
            case 'C':
                naipeIndex = 0;
                break;
            case 'E':
                naipeIndex = 1;
                break;
            case 'U':
                naipeIndex = 2;
                break;
            case 'P':
                naipeIndex = 3;
                break;
        }

        naipes[naipeIndex][valor - 1]++;
    }

    for (i = 0; i < 4; i++) {
        int faltando = 0;
        int duplicadas = 0;

        int j;
        for (j = 0; j < 13; j++) {
            if (naipes[i][j] == 0) {
                faltando++;
            } else if (naipes[i][j] > 1) {
                duplicadas = 1;
                break;
            }
        }

        if (duplicadas) {
            printf("erro\n");
        } else if (faltando > 0) {
            printf("%d\n", faltando);
        } else {
            printf("0\n");
        }
    }

    return 0;
}
