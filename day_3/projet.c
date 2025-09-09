#include<stdio.h> 
#include <string.h> 
#include <stdbool.h> //bib de bool
//define les const
#define MAX_liver 100
#define MAX_utilisateur 100
#define TAILLE 50
//struct de livre
struct livre{
    char titre[MAX_liver][TAILLE];
    char auteur[MAX_liver][TAILLE];
    int annee[MAX_liver];
    int cmp1; //number livres
    int disponible[MAX_liver];
    //bool trouve;
};
//struct de Utilisateurs
struct Utilisateurs{
    char nom[MAX_utilisateur][TAILLE];
    char prenom[MAX_utilisateur][TAILLE];
    int ID[MAX_utilisateur];
    int cmp2; // n.utilisateur
};
//struct de Emprunts
struct Emprunts{
    int idUtilisateur;
    int indexLivre; 
    int cmp3;  //n.emprunts
};

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//====================================================================les fonctions================================================================
//========fonctions pour ajouter===============
struct livre creerLivre(struct livre L){
    int ajoute;
    printf("combien des livres voulez vous aajouter? ");
    scanf("%d", &ajoute);

    if(L.cmp1>=MAX_liver){
        printf("la biblioteque est plein.\n");
        return L;
    }
    for(int j=0; j<ajoute; j++){
        int i=L.cmp1;
        printf("======Livres %d:====== \n", j+1);
        printf("saisir le titre de %d livre: ", j+1);
        scanf("%s", L.titre[i]);

        printf("saisir le auteur de  %d livre: ", j+1);
        scanf("%s", L.auteur[i]);

        printf("saisir l'annee de %d livre: ", j+1);
        scanf("%d", &L.annee[i]);

        L.cmp1++;
        
    }
    return L;
}
//========fonctions pour Supprimer===============
struct livre supprimerLivre(struct livre L){
    char recherche[TAILLE];
    printf("saisir le livre qui voulez vous supprime.");
    scanf("%s", recherche);
    bool trouve = true;
    for(int i=0; i<L.cmp1;i++){
        if(strcmp(recherche, L.titre[i])==0){
            for(int j=i; j<L.cmp1-1; j++){
                strcpy(L.titre[j], L.titre[j+1]);
                strcpy(L.auteur[j], L.auteur[j+1]);
                L.annee[j] = L.annee[j+1];
            }
            L.cmp1--;
            printf("supprime avec succes.\n");
            trouve=true;
            break;
        }
    }
    if(trouve==false){
        printf("le livre non trouve.\n");
    }

    return L;
}
//========fonctions pour Ajouter un utilisateur===============

struct Utilisateurs ajouterUtilisateur(struct Utilisateurs U){
    int ajoute;
    printf("combien des livres voulez vous aajouter? ");
    scanf("%d", &ajoute);

    if(U.cmp2>=MAX_utilisateur){
        printf("la liste de l'utilasteur est plein.\n");
        return U;
    }
    for(int j=0; j<ajoute; j++){
        int i=U.cmp2;
        printf("======utilisateur %d:====== \n", j+1);
        printf("saisir le nom de %d l'utilisateur : ", j+1);
        scanf("%s", U.nom[i]);

        printf("saisir le prenom de %d l'utilisateur : ", j+1);
        scanf("%s", U.prenom[i]);

        printf("saisir l'ID %d l'utilisateur: ", j+1);
        scanf("%d", &U.ID[i]);

        U.cmp2++;
        
    }
    return U;
}

//========Emprunter un livre===============
struct Livre emprunterLivre(struct Livre L, struct Utilisateurs U, struct Emprunts E){
    int j=U.cmp2;
    char titreRecherche[TAILLE];
    int userID
    printf("saisir l'id de l'utilisateur :");
    scanf("%d", &userID);
    printf("saisir le titre de liver qui voulez vous rechercher :");
    scanf("%s", titreRecherche);
    // condition qui cherche sur le utilisateur
    int j=U.cmp2;
    int trouve=0;
    for(int j=0; j<U.cmp2; j++){
        if(userID == U.ID[j]){
            printf("voila l'id de l'utilisateur. %d\n",U.ID[j]);
            trouve=1;
            break;
        }
    }
    if(trouve==0){
        printf("l'id non trouve.\n");
    }
    // condition qui cherche sur le livre
    int i = L.cmp1;  
    int indexLivre = -1;
    for(int i=0; i<L.cmp1;i++){
        if(strcmp(titreRecherche, L.titre[i])==0 && L.disponible[i]==1){
            indexLivre=1;
            break;

        }
    }
    if(indexLivre=-1){
        printf("livre non trouve.\n");
    }else{
        printf("livre trouve.\n");
        L.disponible[indexLivre]=0;
    }

}

int main(){
    struct livre Livres;
    struct Utilisateurs UTI;
    struct Emprunts emp;
    int choix;
    do{

        printf("++++++++++++++++++Menu++++++++++++++++++++++\n");

        printf("1. Ajouter un livre\n");
        printf("2. Supprimer un livree\n");
        printf("3. Ajouter un utilisateur\n");
        printf("4. Emprunter un livre\n");
        printf("5. Retourner un livre\n");
        printf("6. Afficher tous les livres\n");
        printf("7. Afficher tous les utilisateurs\n");
        printf("8. Afficher tous les emprunts\n");
        printf("0. Quitter\n");
        printf("\n");

        printf("============choix==================\n");
        printf("Saisir le choix.");
        scanf("%d", &choix);

        switch(choix){
            case 1:
            printf("==============Ajouter un livre==============\n");
            Livres=creerLivre(Livres);
            break;
            
            
            case 2:
            printf("==============Supprimer un livree==============\n");
            Livres=supprimerLivre(Livres);
            break;
            
            case 3:
            printf("==============Ajouter un utilisateur==============\n");
            UTI=ajouterUtilisateur(UTI);
            break;

            case 4:
            printf("==============Emprunter un livre==============\n");
            break;

            case 5:
            printf("==============Retourner un livre==============\n");
            break;

            case 6:
            printf("==============Afficher tous les livres==============\n");
            break;

            case 7:
            printf("==============Afficher tous les utilisateurs==============\n");
            break;

            case 8:
            printf("==============Afficher tous les emprunts==============\n");
            break;

            default:
            printf("choix non valid.\n");

        }

        
    }while(choix!=0);
}