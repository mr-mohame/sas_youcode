#include<stdio.h>
#include <string.h>
int main(){  
   #define MAX_LIVRES 100
   char titer_liver[MAX_LIVRES][50];
   char nom_auteur[MAX_LIVRES][50];
   char recherche[50];
   float prix[MAX_LIVRES];
   int quantite[MAX_LIVRES];
   int nlivers = 0; 
   int choix, ajoute, i, trouve=0, index=-1, compteur=0;
    do{
        printf("\n======== menu bibliotheque ========\n");
        printf("1 - Ajouter un Livre au Stock\n");
        printf("2 - Afficher Tous les Livres Disponibles\n");
        printf("3 - Rechercher un livre par son titre.\n");
        printf("4 - Mettre à Jour la Quantité d'un Livre\n");
        printf("5 - Supprimer un Livre du Stock\n");
        printf("6 - Afficher le Nombre Total de Livres en Stock\n");
        printf("0 - Quitter\n");

        printf("enter un choix:\n");
        scanf("%d", &choix);
        

        switch(choix){
            case 1:
            printf("================Ajouter un Livre au Stock================\n");
            printf("combien des livers vous voulez enter\n");
            scanf("%d", &ajoute);

            for(i=0; i<nlivers+ajoute; i++){
                
                    printf("ajouter le titer de liver %d:  ", i+1);
                    scanf("%49s", titer_liver[i]);
                    printf("ajouter l'auteur de liver %d:  ", i+1);
                    scanf("%49s", nom_auteur[i]);
                    printf("ajouter le prix de liver %d:  ", i+1);
                    scanf("%f", &prix[i]);
                    printf("ajouter la quantite de liver %d:  ", i+1);
                    scanf("%d", &quantite[i]);  
                    printf("\n");       
            }
            nlivers+=ajoute; //combien des livers
            break;
            case 2:
            printf("===========Afficher Tous les Livres Disponibles==================\n");
            for(i=0; i<nlivers; i++){
                printf("le titer de liver %d: %s\n", i+1, titer_liver[i]);
                printf("le nom de l'auteur de liver%d: %s\n", i+1, nom_auteur[i]);
                printf("le prix de liver%d: %f\n", i+1, prix[i]);
                printf("le quantite de liver%d: %d\n", i+1, quantite[i]);
                printf("\n");  
            }
            break;
            case 3:
            printf("===========Rechercher un livre par son titre==================\n");
            printf("enter le nom de liver qui vous voulez recherche :");
            scanf("%s",recherche);
            for(i=0; i<nlivers; i++){
                if(strcmp(titer_liver[i], recherche)==0){
                    printf("voila le liver qui vous avez rechercher:nom de liver  %s , nom de l'auteur : %s , le prix : %f , le quantite : %d \n", titer_liver[i], nom_auteur[i], prix[i], quantite[i]);
                }
            }
            break;
            case 4:
            printf("===========Mettre à Jour la Quantité d'un Livre==================\n");
            //char recherche[50];
            int nouveau_quantite;
            printf("enter le nom de liver qui vous voulez recherche :");
            scanf("%s",recherche);
            for(i=0; i<nlivers; i++){
                if(strcmp(titer_liver[i], recherche)==0){ //strcmp comparer deux chaînes de caractères
                    printf("enter le nouveau quantité\n");
                    scanf("%d", &nouveau_quantite);
                    quantite[i]=nouveau_quantite;
                    printf("la quantité a ete mise a jour avec succes\n ");
                    trouve = 1;
                }
                if(trouve == 0) {
                    printf("Livre non trouvé.\n");
        
                }
            }
            break;
            case 5:
            printf("===========Supprimer un Livre du Stock==================\n");
            printf("enter le nom de liver qui vous voulez supprimer :");
            scanf("%s", recherche);
            for(i=0; i<nlivers; i++){
                if(strcmp(titer_liver[i], recherche)==0){
                    index=i;
                    if(index!=-1){
                        strcpy(titer_liver[i], titer_liver[i+1]); // strcpy cette fonction permet. de copie contenu d'une chaîne de caractères dans une autre.
                    }
                    nlivers--;
                    printf("la livre a ete supprime avec succes");
                }
                if(trouve == 0) {
                    printf("Livre non trouvé.\n");
        
                }
            }
            break;
            case 6:
            printf("===========Afficher le Nombre Total de Livres en Stock==================\n");
            for(i=0; i<nlivers; i++){
                compteur+=quantite[i];   
            }
            printf("les Nombres Total de Livres en Stock est: %d", compteur);
            break;
        }
    }while(choix!=0);
    return 0;
}