#include <stdio.h>

void inverserTableau(int tab[], int n) {
    int i, temp;
    for (i = 0; i < n / 2; i++) {
        temp = tab[i];
        tab[i] = tab[n - 1 - i];
        tab[n - 1 - i] = temp;
    }
}

void afficherTableau(int tab[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", tab[i]);
    }
    printf("\n");
}

int main() {
    int n, i;

    printf("Entrez la taille du tableau : ");
    scanf("%d", &n);

    int tab[n]; // tableau de taille n

    printf("Entrez les elements du tableau :\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &tab[i]);
    }

    printf("Tableau avant inversion : ");
    afficherTableau(tab, n);

    inverserTableau(tab, n);

    printf("Tableau apres inversion : ");
    afficherTableau(tab, n);

    return 0;
}