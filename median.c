#include <stdio.h>

// Fonction pour trier le tableau (méthode simple : tri à bulles)
void trierTableau(int tab[], int n) {
    int i, j, temp;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (tab[j] > tab[j + 1]) {
                // Échange
                temp = tab[j];
                tab[j] = tab[j + 1];
                tab[j + 1] = temp;
            }
        }
    }
}

// Fonction pour calculer la médiane
double mediane(int tab[], int n) {
    trierTableau(tab, n);

    if (n % 2 == 1) {
        // n impair → élément du milieu
        return tab[n / 2];
    } else {
        // n pair → moyenne des deux éléments centraux
        return (tab[(n - 1) / 2] + tab[n / 2]) / 2.0;
    }
}

int main() {
    int n, i;

    printf("Entrez la taille du tableau : ");
    scanf("%d", &n);

    int tab[n];
    printf("Entrez les elements du tableau :\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &tab[i]);
    }

    printf("La mediane est : %.2f\n", mediane(tab, n));

    return 0;
}
