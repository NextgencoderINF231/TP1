#include <stdio.h>

int produit(int a, int b) {
    int resultat = 0;

    // Répéter a fois l'ajout de b
    for (int i = 0; i < a; i++) {
        // Au lieu de resultat += b, on ajoute b avec uniquement +1
        for (int j = 0; j < b; j++) {
            resultat = resultat + 1;
        }
    }

    return resultat;
}

int main() {
    int a, b;

    printf("Entrez deux entiers positifs a et b : ");
    scanf("%d %d", &a, &b);

    if (a > 0 && b > 0) {
        printf("%d * %d = %d\n", a, b, produit(a, b));
    } else {
        printf("Erreur : a et b doivent etre > 0.\n");
    }

    return 0;
}