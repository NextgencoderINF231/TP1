#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, choix;

    printf("Entrez la taille du tableau : ");
    scanf("%d", &n);

    int *tab = malloc(n * sizeof(int));

    if (tab == NULL) {
        printf("Erreur d'allocation memoire\n");
        return 1;
    }

    printf("Entrez les %d elements du tableau :\n", n);
    for (int i = 0; i < n; i++) {
        printf("Element %d : ", i + 1);
        scanf("%d", &tab[i]);
    }

    printf("\nTableau saisi : ");
    for (int i = 0; i < n; i++) {
        printf("%d ", tab[i]);
    }
    printf("\n");

    printf("\nquel ordre de tri voulez vous? :\n");
    printf("1: Ordre croissant\n");
    printf("2: Ordre decroissant\n");
    printf("Votre choix : ");
    scanf("%d", &choix);

    int estTrie = 1;
    if (choix == 1) {
        for (int i = 0; i < n - 1; i++) {
            if (tab[i] > tab[i + 1]) {
                estTrie = 0;
                break;
            }
        }
        if (estTrie)
            printf("Le tableau est trie en ordre croissant.\n");
        else
            printf("Le tableau n'est pas trie en ordre croissant.\n");

    } else if (choix == 2) {
        for (int i = 0; i < n - 1; i++) {
            if (tab[i] < tab[i + 1]) {
                estTrie = 0;
                break;
            }
        }
        if (estTrie)
            printf("Le tableau est trie en ordre decroissant.\n");
        else
            printf("Le tableau n'est pas trie en ordre decroissant.\n");

    } else {
        printf("Choix invalide.\n");
    }

    free(tab);
    return 0;
}