#include<stdio.h>
#include<string.h>
//Challenge 10 : Rechercher un Élément


int main(){
    int i, cherche, taille;
    
    printf("saisir la taiile de tableux :");
    scanf("%d", &taille);
    int tab_1[taille];
    printf("===========remplir le tableux===========\n");
    for(i=0; i<taille; i++){
        printf("saisir les element %d:",i);
        scanf("%d", &tab_1[i]);
    }
    printf("===========recherhce le element===========\n");
    printf("saisir les valeur qui voulez vous rechercher: ");
    scanf("%d",&cherche);
    int trouve=0;
    for(i=0; i<taille;i++){
        if(cherche==tab_1[i]){
            printf("Élément trouvé\n");
            trouve=1;
            break;

        }        
    }
    if(trouve == 0) {
        printf("Élément non trouvé\n");
    }



    return 0;
}