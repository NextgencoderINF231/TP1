Rapport Personnel de TP – INF 231_EC2 : Structure de Données II
Responsable : Pr. Metatagia
UE : INF 231_EC2 – Structure de Données II


Introduction

Ce TP a pour objectif de mettre en pratique les notions de manipulation de tableaux, de matrices et de vecteurs en langage C. À travers une série d’exercices, nous avons appris à utiliser des boucles, des fonctions et des structures de données pour réaliser des opérations fondamentales comme la somme et le produit de matrices, les recherches dans un tableau, le test de tri, et la manipulation de vecteurs.


Travail Réalisé

1. Somme de matrices

Principe : La somme de deux matrices  et  de même dimension consiste à additionner leurs éléments correspondants.

Approche : utilisation de deux boucles imbriquées for (lignes × colonnes).


2. Produit de matrices

Principe : Le produit  est défini si le nombre de colonnes de  est égal au nombre de lignes de . Chaque élément de  est la somme des produits des éléments de la ligne de  par ceux de la colonne de .

Approche : triple boucle for.


3. Recherche séquentielle dans un tableau

Principe : Parcourir le tableau élément par élément jusqu’à trouver la valeur recherchée.

Approche : boucle for avec une condition if.


4. Produit de deux entiers positifs (a × b, avec a,b > 0)

Principe : Simulation par additions successives si on ne veut pas utiliser l’opérateur *.

Approche : boucle répétant l’addition de a un nombre b de fois.


5. Tester si un tableau est trié

Principe : Vérifier si chaque élément est inférieur ou égal (ordre croissant) à son suivant.

Approche : boucle for avec condition de comparaison.


6. Trouver le médian dans un tableau

Principe : Le médian est l’élément central d’un tableau trié.

Approche : trier le tableau (par exemple avec le tri à bulles), puis prendre l’élément du milieu.



7. Inverser un tableau

Principe : Échanger les éléments du début avec ceux de la fin.

Approche : boucle for avec indices symétriques.


8. Produit vectoriel (dans ℝ³)

Principe : Pour deux vecteurs  et , le produit vectoriel est :


u \times v = (u_2v_3 - u_3v_2, \; u_3v_1 - u_1v_3, \; u_1v_2 - u_2v_1)


9. Produit vecteur × matrice

Principe : Si  est un vecteur ligne et  une matrice, le produit donne un nouveau vecteur.

Approche : boucle for pour multiplier chaque élément du vecteur par la colonne correspondante de la matrice.


✓Observations Personnelles

J’ai constaté que la manipulation des indices est essentielle pour éviter les erreurs de segmentation dans les programmes C.

La compréhension du produit matriciel demande de bien suivre la logique des indices.

La recherche séquentielle est simple à implémenter mais inefficace pour les grands tableaux : cela montre l’importance des algorithmes de recherche plus optimisés.

La notion de médian m’a aidé à mieux comprendre l’intérêt du tri des données.


√Difficultés Rencontrées

Erreurs de compilation liées à l’utilisation de tableaux non initialisés.

Confusion au début sur les dimensions compatibles pour le produit de matrices.

Gestion des indices lors de l’inversion d’un tableau.

Conclusion

Ce TP m’a permis de consolider mes connaissances en programmation C appliquée aux structures de données. Les exercices réalisés couvrent des opérations fondamentales sur les tableaux, vecteurs et matrices, qui constituent des briques de base pour des applications plus avancées comme l’algèbre linéaire, la modélisation scientifique et le traitement de données.
En travaillant sur ce TP, j’ai amélioré ma maîtrise des boucles, des conditions et des fonctions en C.
