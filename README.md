TP INF 231_EC2 — Structure de Données II
Encadrant : PR Metatagia
Matière : Structure de Données II
Langage : C

- Objectifs pédagogiques

Ce TP vise à consolider les bases de la programmation en C à travers la manipulation :
des matrices (somme, produit, produit avec vecteur),
des tableaux (recherche séquentielle, test de tri, médiane, inversion),
des opérations mathématiques fondamentales (produit vectoriel, multiplication restreinte avec +1).
Chaque programme est indépendant et peut être compilé et exécuté séparément.

-Liste des programmes inclus

somme_matrices.c : Calcule la somme de deux matrices de dimensions compatibles.
produit_matrices.c : Effectue le produit de deux matrices (m×n et n×p).
recherche_sequentielle.c : Recherche une valeur donnée dans un tableau par parcours linéaire.
multiplication_plus_un.c : Calcule a × b (pour a, b > 0) en utilisant exclusivement l’opération +1.
tester_trie.c : Vérifie si un tableau est trié (ordre croissant ou décroissant).
mediane_tableau.c : Calcule la médiane des éléments d’un tableau.
inverser_tableau.c : Inverse l’ordre des éléments d’un tableau.
produit_vectoriel.c : Calcule le produit vectoriel de deux vecteurs en 3D.
vecteur_x_matrice.c : Multiplie un vecteur-ligne par une matrice.

-Compilation

Tous les programmes se compilent indépendamment avec GCC ou Clang.
Exemple générique :
Copier le code
Bash
gcc nom_du_programme.c -o nom_du_programme
Cas particulier : si le programme utilise math.h, ajoutez l’option -lm :
Copier le code
Bash
gcc programme.c -o programme -lm

-Exécution

Une fois compilés, les programmes s’exécutent séparément :
./somme_matrices (saisie ou fichier d’entrée)
./produit_matrices
./recherche_sequentielle (avec saisie de la taille et des valeurs)
./produit_vectoriel (saisir deux vecteurs 3D)
./vecteur_x_matrice (saisir le vecteur et la matrice)

 Formats d’entrée attendus

Matrice (n×m) :
Copier le code

n m
a11 a12 ... a1m
a21 a22 ... a2m
...
Tableau / Vecteur :
Copier le code

N
x1 x2 x3 ... xN

 Dépendances


Compilateur C : GCC ou Clang (C11 recommandé).
Bibliothèques standards : stdio.h, stdlib.h, string.h.
math.h si nécessaire (ajouter -lm lors de la compilation).
 Remarques et problèmes connus

Le programme multiplication_plus_un.c est très lent pour de grands nombres (objectif pédagogique).
Le calcul de la médiane trie le tableau, ce qui modifie son ordre initial.
Le produit vectoriel est uniquement défini pour les vecteurs en 3D.
Il est recommandé de tester avec de petits jeux de données avant d’utiliser de grandes tailles.


 Membres du groupe


NGOUGO TZONEU WILFRIED — 24G2242

Kenmogne Tagne Ange Beneditte —
24G2075

Ambassa Mfegue Gabriella Fidélité —
24F2667

Minkam Tedonfoue Kelly Dolviane — 
24G2883

Noutcha Ngatcha Justin Miguel — 
24G2055

Kwayep Ngapet Carelle — 24F2676# TP1
Premier TP pour l'UE INF231
