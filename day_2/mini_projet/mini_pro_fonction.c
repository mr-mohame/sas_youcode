#include<stdio.h> 
#include <string.h> 
//fefinir les constantes 
#define MAX_LIVRES 100 
#define TAILLE 50 
// structure Livres 
struct Livres{ 
    char titer_liver[MAX_LIVRES][TAILLE]; 
    char nom_auteur[MAX_LIVRES][TAILLE]; 
    float prix[MAX_LIVRES]; 
    int quantite[MAX_LIVRES]; 
    int cmp; 
}; 
//fonction pour ajouter des livers 
struct Livres ajouterLivers(struct Livres l){ 
    int ajoute; 
    printf("combien des livers vous voulez enter\n"); 
    scanf("%d", &ajoute); 
    if(l.cmp>= MAX_LIVRES){ 
        printf("la bibloitique est plein."); 
        return l; 
    } 
    for(int j=0; j<ajoute; j++){ 
        int i = l.cmp; 
        getchar(); 
        printf("\nLivre %d :\n", j+1); 
        printf("Saisir le titer de liver: "); 
        fgets(l.titer_liver[i], TAILLE, stdin);
        l.titer_liver[i][strcspn(l.titer_liver[i], "\n")] = 0;

        printf("Saisir le nom de l'auteur: "); 
        fgets(l.nom_auteur[i], TAILLE, stdin); 
        l.nom_auteur[i][strcspn(l.nom_auteur[i], "\n")] = 0;

        printf("Saisir le prix de liver: "); 
        scanf("%f", &l.prix[i]); 

        printf("Saisir la quantite de liver: "); 
        scanf("%d", &l.quantite[i]); 

        l.cmp++; 
    } 
    return l; 
} 
//fonction pour afficher des livers void car ne return rien 
void afficherLivres(struct Livres l){ 
    for(int i=0; i<l.cmp;i++){ 
        printf("le nom de liver %d: %s\n", i+1, l.titer_liver[i]); 
        printf("le nom de auteur %d: %s\n", i+1, l.nom_auteur[i]); 
        printf("le prix de liver %d: %.2f\n", i+1, l.prix[i]); 
        printf("la quantite de liver %d: %d\n", i+1, l.quantite[i]); 
        printf("\n"); 
    } 
} 
//fonction pour recherche des livers 
void rechercheLivres(struct Livres l){ 
    char recherche[TAILLE]; 
    getchar(); 
    printf("enter le nom de liver qui vous voulez recherche :"); 
    fgets(recherche, TAILLE, stdin); 
    recherche[strcspn(recherche, "\n")] = 0; // strcspn pour supprime \n 
    int trouve=0; 
    for(int i=0;i<l.cmp;i++){ 
        if(strcmp(recherche, l.titer_liver[i])==0){ 
            printf("Voila le livre que vous avez recherché :\n"); 
            printf("Nom du livre : %s\n", l.titer_liver[i]); 
            printf("Nom de l'auteur : %s\n", l.nom_auteur[i]); 
            printf("Quantité : %d\n", l.quantite[i]); 
            printf("Prix : %.2f\n", l.prix[i]); 
            trouve=1; 
            break; 
        }  
    } 
    if(trouve == 0){ 
        printf("Livre non trouvé.\n"); 
    } 
} 
//fonction pour Mettre à jour la quantité de liver 
struct Livres metterjourLivres(struct Livres l){ 
    char recherche[TAILLE]; 
    getchar(); 
    printf("enter le nom de liver qui vous voulez recherche :"); 
    fgets(recherche, TAILLE, stdin); 
    recherche[strcspn(recherche, "\n")] = 0; // strcspn pour supprime \n 
    int trouve=0; 
    int nouveau_quantite; 
    for(int i=0;i<l.cmp;i++){ 
        if(strcmp(recherche, l.titer_liver[i])==0){ 
            printf("enter le nouveau quantité\n"); 
            scanf("%d", &nouveau_quantite); 
            l.quantite[i]=nouveau_quantite; 
            printf("la quantité a ete mise a jour avec succes\n "); 
            trouve = 1; 
            break; 
        } 
    } 
    if(trouve == 0) { 
        printf("Livre non trouvé.\n");
     }
     return l;
    } 
    //fonction pour Supprimer un liver 
    struct Livres supprimeLivres(struct Livres l){ 
        char recherche[TAILLE]; 
        getchar(); 
        printf("enter le nom de liver qui vous voulez supprime :"); 
        fgets(recherche, TAILLE, stdin); 
        recherche[strcspn(recherche, "\n")] = 0; // strcspn pour supprime \n 
        int trouve=0; 
        for(int i=0;i<l.cmp;i++){ 
            if(strcmp(recherche, l.titer_liver[i])==0){ 
                int index=i; 
                for(int j=i;j<l.cmp-1;j++){ 
                    //strcpy cette fonction permet. de copie contenu d'une chaîne de caractères dans une autre. 
                    strcpy(l.titer_liver[j],l.titer_liver[j+1]); 
                    strcpy(l.nom_auteur[j],l.nom_auteur[j+1]); 
                    l.prix[j]=l.prix[j+1]; 
                    l.quantite[j]=l.quantite[j+1]; 
                } 
                l.cmp--; 
                printf("la livre a ete supprime avec succes\n"); 
                trouve = 1; 
                break; 
            } 
        } 
        if(trouve == 0){ 
            printf("Livre non trouvé.\n"); 
        } 
        return l;
    } 
    // foncation pour Afficher le nombre total de livres en stock 
    void affichertoutalLivres(struct Livres l){ 
        int compteur=0; 
        for(int i=0; i<l.cmp; i++){ 
            compteur+=l.quantite[i]; 
        } 
        printf("les Nombres Total de Livres en Stock est: %d\n", compteur); 
    } 
    int main(){ 
        struct Livres bibliotheque; 
        int choix; 
        bibliotheque.cmp=0; 
        do{ 
            printf("====================Menu===================\n"); 
            printf("1 - Ajouter un Livre au Stock\n"); 
            printf("2 - Afficher Tous les Livres Disponibles\n"); 
            printf("3 - Rechercher un livre par son titre.\n"); 
            printf("4 - Mettre à Jour la Quantité d'un Livre\n"); 
            printf("5 - Supprimer un Livre du Stock\n"); 
            printf("6 - Afficher le Nombre Total de Livres en Stock\n"); 
            printf("0 - Quitter\n"); 
            printf("====================Choix===================\n"); 
            printf("Saisir le choix: "); 
            scanf("%d", &choix); 
            switch(choix){ 
                case 1: 
                printf("===========Ajouter un Livre au Stock==================\n"); 
                bibliotheque=ajouterLivers(bibliotheque); 
                break; 
                case 2: 
                printf("===========Afficher Tous les Livres Disponibles==================\n"); 
                afficherLivres(bibliotheque); 
                break; 
                case 3: 
                printf("===========Rechercher un livre par son titre==================\n"); 
                rechercheLivres(bibliotheque); 
                break; 
                case 4: 
                printf("===========Mettre à Jour la Quantité d'un Livre==================\n"); 
                bibliotheque=metterjourLivres(bibliotheque); 
                break; 
                case 5: 
                printf("===========Supprimer un Livre du Stock==================\n"); 
                bibliotheque=supprimeLivres(bibliotheque); 
                break; 
                case 6: 
                printf("===========Afficher le Nombre Total de Livres en Stock==================\n"); 
                affichertoutalLivres(bibliotheque); 
                break; 
                default: 
                printf("Choix invalide.\n"); 
                break; 
            } 
        }while(choix!=0); 
        return 0; 
    }