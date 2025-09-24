#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int n, m;

    printf("Entrez la taille du vecteur (n): ");
    scanf("%d", &n);

    printf("Entrez le nombre de colonnes de la matrice (m): ");
    scanf("%d", &m);

    // Allocation dynamique
    int *vecteur = malloc(n * sizeof(int));
    int **matrice = malloc(n * sizeof(int *));
    int *resultat = malloc(m * sizeof(int));

    for (int i = 0; i < n; i++) {
        matrice[i] = malloc(m * sizeof(int));
    }

    // Lecture du vecteur
    printf("Entrez les %d éléments du vecteur :\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &vecteur[i]);
    }

    // Lecture de la matrice
    printf("Entrez les éléments de la matrice %d x %d :\n", n, m);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &matrice[i][j]);
        }
    }

    // Calcul du produit vecteur * matrice
    for (int j = 0; j < m; j++) {
        resultat[j] = 0;
        for (int i = 0; i < n; i++) {
            resultat[j] += vecteur[i] * matrice[i][j];
        }
    }

    // Affichage du résultat
    printf("Résultat du produit vecteur * matrice :\n");
    for (int j = 0; j < m; j++) {
        printf("%d ", resultat[j]);
    }
    printf("\n");

    // Libération mémoire
    free(vecteur);
    for (int i = 0; i < n; i++) {
        free(matrice[i]);
    }
    free(matrice);
    free(resultat);

    return 0;
}