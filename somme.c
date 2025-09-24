#include <stdio.h>

int main() {
    int A[2][2], B[2][2];
    int Somme[2][2];
    int i, j;

    printf("Entrez les éléments de la matrice A (%dx%d):\n", 2, 2);
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 2; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    printf("Entrez les elements de la matrice B (%dx%d):\n", 2, 2);
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 2; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    for(i = 0; i < 2; i++) {
        for(j = 0; j < 2; j++) {
            Somme[i][j] = A[i][j] + B[i][j];
        }
    }

    printf("\nSomme des deux matrices (A + B):\n");
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 2; j++) {
            printf("%d ", Somme[i][j]);
        }
        printf("\n");
    }

    return 0;
}