#include <stdio.h>
#include <string.h>
struct livre {
    char titre[50];
    char auteur[50];
    int annee;
};
struct livre creerLivre() {
    struct livre L;
    printf("entrer le titre du livre : ");
    scanf("%s", L.titre);
    printf("entrer l'auteur du livre : ");
    scanf("%s", L.auteur);
    printf("entrer l'annee du livre : ");
    scanf("%d", &L.annee);
    return L;
}
void afficherLivre(struct livre L) {
    printf("titre  : %s\n", L.titre);
    printf("auteur : %s\n", L.auteur);
    printf("annee  : %d\n", L.annee);
}

int main() {
    struct livre monLivre;
    monLivre = creerLivre();
    afficherLivre(monLivre);

    return 0;
}
