#include <stdio.h>

int main() {
    int A[3][3], B[3][3];
    int produit [3][3];
    int i, j;

    printf("Entrez les éléments de la matrice A (%dx%d):\n", 3, 3);
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    printf("Entrez les elements de la matrice B (%dx%d):\n", 3, 3);
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            produit[i][j] = A[i][j] + B[i][j];
        }
    }

    printf("\nSomme des deux matrices (A + B):\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf("%d ", produit [i][j]);
        }
        printf("\n");
    }

    return 0;
}