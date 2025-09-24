#include <stdio.h>

int main() {
    int Tab[1000];
    int n, i, x, position = 0;

    printf("Entrez la taille du tableau : ");
    scanf("%d", &n);

    printf("Entrez les éléments du tableau :\n");
    for(i = 0; i < n; i++) {
        printf("T[%d]=\t", i);
        scanf("%d", &Tab[i]);
    }

    printf("Entrez la valeur à rechercher : ");
    scanf("%d", &x);

    i = 0;
    for(i = 0; i < n; i++) {
        if(Tab[i] == x) {
            position=1;
            n = i;
            break ;
        }

    }
    if(position==1) {
        printf("\n l'élément est présent dans le tableau \n" );
        printf("il se trouve à l'indice T[%d]",n);
    } else {
        printf("\n l'élément n'est pas présent dans le tableau\n");
    }

    return 0;
}


