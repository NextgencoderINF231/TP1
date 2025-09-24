#include <stdio.h>

void produit_vectoriel(int a[3], int b[3], int result[3]) {
    result[0] = a[1]*b[2] - a[2]*b[1];
    result[1] = a[2]*b[0] - a[0]*b[2];
    result[2] = a[0]*b[1] - a[1]*b[0];
}

int main() {
    int n, i;
    printf("Combien de vecteurs 3D voulez-vous multiplier ? ");
    scanf("%d", &n);

    if (n < 2) {
        printf("Il faut au moins deux vecteurs.\n");
        return 1;
    }

    int vecteurs[n][3];
    for (i = 0; i < n; i++) {
        printf("Entrez les 3 composantes du vecteur %d : ", i+1);
        scanf("%d %d %d", &vecteurs[i][0], &vecteurs[i][1], &vecteurs[i][2]);
    }

    int result[3];
    // Commence par le produit du premier et du deuxième vecteur
    produit_vectoriel(vecteurs[0], vecteurs[1], result);

    // Multiplie ensuite successivement avec les vecteurs suivants
    for (i = 2; i < n; i++) {
        int temp[3];
        produit_vectoriel(result, vecteurs[i], temp);
        for (int j = 0; j < 3; j++)
            result[j] = temp[j];
    }

    printf("Le produit vectoriel final est : [%d, %d, %d]\n", result[0], result[1], result[2]);
    return 0;
}