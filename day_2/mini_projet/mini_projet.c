#include<stdio.h>
#include <string.h>
//strcmp comparer les chaînes de caractères caractere par caractere

int main(){
    int nlivers,i;

    printf("--------le nomber des livers-------\n");
    printf("enter le nomber des livers: \n");
    scanf("%d", &nlivers);
    char titer[nlivers][50];
    char auteur[nlivers][50];
    float prix[nlivers];
    int quantite[nlivers];
    int trouve =0;

    printf("--------remlir et afficher le tableux-------\n");
    for(i=0; i<nlivers; i++){
        printf("le titer de liver %d:  ", i+1);
        scanf("%s", titer[i]);
        printf("l'auteur de liver %d:  ", i+1);
        scanf("%s", auteur[i]);
        printf("le prix de liver %d:  ", i+1);
        scanf("%f", &prix[i]);
        printf("la quantite de liver %d:  ", i+1);
        scanf("%d", &quantite[i]);      
    }
    printf("--------rechercher un livre par titre-------\n");
    char recherche[50];
    printf("enter le nom de liver recherche: ");
    scanf("%s", recherche);   
    for(i=0; i<nlivers;i++){
        if(strcmp(titer[i], recherche) == 0){
            printf("\nlivre trouvé:\n");
            printf("titre: %s\n", titer[i]);
            printf("auteur: %s\n", auteur[i]);
            printf("prix: %.2f\n", prix[i]);
            printf("quantite: %d\n", quantite[i]);
            trouve = 1;
            break;
        }
        if(trouve == 0) {
        printf("Livre non trouvé.\n");
    }
    }
    printf("--------Mettre à Jour la Quantité d'un Livre-------\n");
    char recherche_1[50];
    int nouveau_quantite;
    printf("enter le nom de liver recherche: ");
    scanf("%s", recherche_1); 
    for(i=0; i<nlivers; i++){
        if(strcmp(titer[i], recherche_1) == 0){  
            printf("le nouveau quantite est: ");
            scanf("%d", &nouveau_quantite);
            quantite[i]=nouveau_quantite;
            printf("la quantite a ete mise ajour\n");
            trouve = 1;
            break;
        }
        if(trouve == 0) {
        printf("Livre non trouvé.\n");
        }
    }
    printf("--------Supprimer un Livre du Stock-------\n");
    char recherche_2[50];
    int index = -1;
    printf("enter le nom de liver qui vous avez supprimer: \n");
    scanf("%s", recherche_2); 
    for(i=0; i<nlivers; i++){
        if(strcmp(titer[i], recherche_2) == 0){
            index = i;
            if(index != -1){
                for( i=index; i<nlivers-1; i++){
                    strcpy(titer[i], titer[i+1]);  // strcpy cette fonction permet. de copie contenu d'une chaîne de caractères dans une autre.
                }
                nlivers--; 
                printf("le liver a ete supprime avec succes\n");

            }else{
                printf("Livre non trouvé.\n");

            }   
        }
    }
    
    printf("--------Afficher le Nombre Total de Livres en Stock-------\n");
    int compteur=0;
    for(i=0; i<nlivers; i++){
        compteur+=quantite[i];
    }
    printf("les nombers totale des livers en stock est: %d\n", compteur);


    return 0;
}