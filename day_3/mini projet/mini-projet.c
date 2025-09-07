#include<stdio.h> 
#include <string.h> 
//fefinir les constantes 
#define MAX_contacts 100 
#define TAILLE 50 
//structure contacts 
struct contacts{ 
    char nom[MAX_contacts][TAILLE]; 
    char n_telephone[MAX_contacts][TAILLE]; 
    char email[MAX_contacts][TAILLE]; 
    int cmp; 
};
//==============les foncation====================
//foncation pour ajouter contacte
struct contacts ajouterContacts(struct contacts C){
    int ajoute;
    printf("combien des contacts voulez vous ajouter ? :");
    scanf("%d", &ajoute);
    if(C.cmp>=MAX_contacts){
        printf("la contact est plein\n");
        return C;
    }
    for(int j=0; j<ajoute; j++){
        int i=C.cmp;
        getchar();
        printf("\nContact %d :\n",j+1);
        printf("Saisir les contacts %d :\n",j+1);
        fgets(C.nom[i], TAILLE, stdin);
        C.nom[i][strcspn(C.nom[i], "\n")] = 0;

        printf("Saisir le numero de telephone %d :\n",j+1);
        fgets(C.n_telephone[i], TAILLE, stdin);
        C.n_telephone[i][strcspn(C.n_telephone[i], "\n")] = 0;

        printf("Saisir l'email %d : \n ",j+1);
        fgets(C.email[i], TAILLE, stdin);
        C.email[i][strcspn(C.email[i], "\n")] = 0;

        C.cmp++;
    }
    return C;
}
//foncation pour Afficher tous les contacts.
void affichertoutContacts(struct contacts C){
    for(int i=0;i<C.cmp;i++){
        printf("le contact %d: %s",i+1, C.nom[i]);
        printf("le numero de telephone %d: %s",i+1, C.n_telephone[i]);
        printf("le email %d: %s",i+1, C.email[i]);
        printf("\n"); 
    }

}
//foncation pour Rechercher un Contact
void rechercheContacts(struct contacts C){
    char recherche[TAILLE];
    getchar();
    printf("saisir le contacte qui voulez vous recherche : ");
    fgets(recherche, TAILLE, stdin);
    recherche[strcspn(recherche, "\n")]=0;
    int trouve=0;
    for(int i=0; i<C.cmp;i++){
        if(strcmp(recherche, C.nom[i])==0){
            printf("voila le contacte qui vous rechercher.\n");
            printf("le nom de contacte est :%s\n",C.nom[i]);
            printf("le numero de contacte est :%s\n",C.n_telephone[i]);
            printf("l'email de contacte est :%s\n",C.email[i]);
            trouve=1;
            break;
        }
    }
    if(trouve==0){
        printf("le contact non trouve\n");
    }
   
}
//foncation pour Modifier un Contact
struct contacts modifierContacts(struct contacts C){
    char recherche[TAILLE];
    getchar();
    printf("saisir le contacte qui voulez vous modifier : ");
    fgets(recherche, TAILLE, stdin);
    recherche[strcspn(recherche, "\n")]=0; //strcspn pour supprime \n
    int trouve=0;
    char nouveau_numero[TAILLE];
    char nouveau_email[TAILLE];
    for(int i=0; i<C.cmp;i++){
        if(strcmp(recherche, C.nom[i])==0){
            printf("Saisir le nouveux numero: \n");
            fgets(nouveau_numero, TAILLE, stdin);
            strcpy(C.n_telephone[i], nouveau_numero);

            printf("Saisir le nouveux l'email: \n");
            fgets(nouveau_email, TAILLE, stdin);
            strcpy(C.email[i], nouveau_email);

            printf("la modification avec succes.\n");
            
            trouve=1;
            break;
        }
    }
    if(trouve==0){
        printf("le contact non trouve.\n");
    }
    return C;
}
//foncation pour Supprimer un Contact
struct contacts supprimeContacts(struct contacts C){
    char recherche[TAILLE];
    getchar();
    printf("saisir le nom de contact qui voulez vous supprime:");
    fgets(recherche, TAILLE, stdin);
    recherche[strcspn(recherche, "\n")]=0;
    int trouve=0;
    for(int i=0;i<C.cmp; i++){
        if(strcmp(C.nom[i], recherche)==0){
            int index=i;
            for(int j=i;j<C.cmp-1;j++){
                strcpy(C.nom[j],C.nom[j+1]);
                strcpy(C.n_telephone[j], C.n_telephone[j+1]);
                strcpy(C.email[j], C.email[j+1]);
            }
            C.cmp--;
            printf("supprime avec succes,\n");
            trouve=1;
            break;
        }
    }
    if(trouve==0){
        printf("le contact non trouve.\n");
    }
    return C;
}
int main(){
    struct contacts TELEPHONE;
    int choix;
    TELEPHONE.cmp=0;
    do{
        printf("============menu==================\n");
        printf("1- Ajouter un Contact.\n");
        printf("2- Modifier un Contact.\n");
        printf("3- Supprimer un Contact.\n");
        printf("4- Afficher Tous les Contacts.\n");
        printf("5- Rechercher un Contact.\n");
        printf("0- Quiter.\n");
        printf("============choix==================\n");
        printf("Saisir le choix.");
        scanf("%d", &choix);
        switch(choix){
            case 1:
            printf("============Ajouter un Contact==================\n");
            TELEPHONE=ajouterContacts(TELEPHONE);
            break;
            case 2:
            printf("============Modifier un Contact==================\n");
            TELEPHONE=modifierContacts(TELEPHONE);
            break;
            case 3:
            printf("============Supprimer un Contact==================\n");
            TELEPHONE=supprimeContacts(TELEPHONE);
            break;
            case 4:
            printf("============Afficher Tous les Contacts==================\n");
            affichertoutContacts(TELEPHONE);
            break;
            case 5:
            printf("============Rechercher un Contact==================\n");
            rechercheContacts(TELEPHONE);
            break;
            default:
            printf("choix non valid.\n");
        }
    }while(choix!=0);
    return 0;

}