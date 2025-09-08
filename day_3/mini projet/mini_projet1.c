#include<stdio.h> 
#include <string.h> 
#include <stdbool.h> //bib de bool

// define les const
#define MAX_contacts 100
#define TAILLE 50

// struct contact

struct contacts{
    char nom[MAX_contacts][TAILLE]; 
    char n_telephone[MAX_contacts][TAILLE]; 
    char email[MAX_contacts][TAILLE]; 
    int cmp;
};
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//====================================================================les fonctions================================================================

//========fonctions pour ajouter===============

struct contacts ajouterContacts(struct contacts C){
    int ajoute;
    printf("combien des contacts voulez vous ajoute: ");
    scanf("%d", &ajoute);

    if(C.cmp>=MAX_contacts){
        printf("le contact est plein.\n");
        return C;
    }
    for(int j=0; j<ajoute; j++){
        int i=C.cmp;
        printf("======Contacts %d:====== \n", j+1);
        printf("saisir le contact %d: \n", j+1);
        scanf("%s", C.nom[i]);

        printf("saisir le numero de telephone %d: \n", j+1);
        scanf("%s", C.n_telephone[i]);

        printf("saisir l'email %d: \n", j+1);
        scanf("%s", C.email[i]);

        C.cmp++;
    }
    return C;
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//========fonctions pour afficher===============

void affichertoutContacts(struct contacts C){
    for(int i=0; i<C.cmp; i++){
        printf("le %d contact est : %s\n", i+1, C.nom[i]);
        printf("le %d numero de telephone est : %s\n", i+1, C.n_telephone[i]);
        printf("le %d email est : %s\n", i+1, C.email[i]);
        printf("\n");
    }
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//========fonctions pour recherche===============

void rechercheContacts(struct contacts C){
    char recherche[TAILLE];
    printf("saisir le nom qui voulez vous recherche :");
    scanf("%s", recherche);
   // bool recherche=true;
    int trouve;
    for(int i=0; i<C.cmp; i++){
        if(strcmp(recherche, C.nom[i])==0){
            printf("le %d contact est : %s", i+1, C.nom[i]);
            printf("le %d numero de telephone est : %s", i+1, C.n_telephone[i]);
            printf("le %d email est : %s", i+1, C.email[i]);
            printf("\n");
            trouve=1;
            break;
        }
    }
    if(trouve==0){
        printf("le contacte non trouve.\n");
    }
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//========fonctions pour Modifier===============

struct contacts modifierContacts(struct contacts C){
    char recherche[TAILLE];
    char nouveau_telephone[TAILLE];
    char nouveau_email[TAILLE];
    printf("saisir le nom qui voulez vous recherche :");
    scanf("%s", recherche);
    int trouve=0;
    for(int i=0; i<C.cmp; i++){
        if(strcmp(recherche, C.nom[i])==0){
            printf("saisir le nouveau numero.");
            scanf("%s", nouveau_telephone);
            strcpy(C.n_telephone[i], nouveau_telephone);

            printf("saisir le nouveau email.");
            scanf("%s", nouveau_email);
            strcpy(C.email[i], nouveau_email);
            printf("le modification est avec succes.\n");
            trouve=1;
            break;
        }
    }
    if(trouve==0){
        printf("le contact non trouve.\n");
    }
    return C;

}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//========fonctions pour supprime===============

struct contacts supprimeContacts(struct contacts C){
    char recherche[TAILLE];
    printf("saisir le contact qui voulez vous supprime.");
    scanf("%s", recherche);
    bool trouve = false;
    for(int i=0; i<C.cmp; i++){
        if(strcmp(recherche, C.nom[i])==0){
            //int index=i;
            for(int j=i; j<C.cmp-1; j++){
                strcpy(C.nom[j],C.nom[j+1]);
                strcpy(C.n_telephone[j],C.n_telephone[j+1]);
                strcpy(C.email[j],C.email[j+1]);
            }
            C.cmp--;
            printf("supprime avec succes.\n");
            trouve=true;
            break;

        }
    }
    if(trouve==false){
        printf("le contact non trouve.\n");
    }
    return C;
}

//=====================================main=====================================================

int main(){
    struct contacts telephone;
    int choix;
    telephone.cmp=0;
    do{
        printf("============menu==================\n");

        printf("1- Ajouter un Contact.\n");
        printf("2- Modifier un Contact.\n");
        printf("3- Supprimer un Contact.\n");
        printf("4- Rechercher un Contact.\n");
        printf("5- Afficher Tous les Contacts.\n");
        printf("0- Quiter.\n");

        printf("============choix==================\n");
        printf("Saisir le choix.");
        scanf("%d", &choix);

        switch(choix){

            case 1:
            printf("=======Ajouter un Contact====\n");
            telephone=ajouterContacts(telephone);
            break;
            case 2:
            printf("=======Modifier un Contact====\n");
            telephone=modifierContacts(telephone);
            break;
            case 3:
            printf("=======Supprimer un Contact====\n");
            telephone=supprimeContacts(telephone);
            break;
            case 4:
            printf("=======Rechercher un Contact====\n");
            rechercheContacts(telephone);
            break;
            case 5:
            printf("=====Afficher Tous les Contacts====\n");
            affichertoutContacts(telephone);
            break;
            default:
            printf("choix non valid.\n");

        }
        

    }while(choix!=0);
}