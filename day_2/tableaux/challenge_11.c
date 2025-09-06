#include<stdio.h>
#include<string.h>
//Challenge 11 : Remplacer un Élément


int main(){
    int i, rempalcer, new_valeur, taille;
    
    printf("saisir la taiile de tableux :");
    scanf("%d", &taille);
    int tab_1[taille];
    printf("===========remplir le tableux===========\n");
    for(i=0; i<taille; i++){
        printf("saisir les element %d:",i);
        scanf("%d", &tab_1[i]);
    }
    printf("===========la valeur à remplacer===========\n");
    printf("saisir les valeur qui voulez vous remplacer: ");
    scanf("%d",&rempalcer);
    printf("saisir le nouveau valeur: ");
    scanf("%d",&new_valeur);
    //int trouve=0;
    for(i=0; i<taille;i++){
        if(rempalcer==tab_1[i]){
            tab_1[i]=new_valeur;
        }  
        printf("%d\n",tab_1[i]);
      
    }
    return 0;
}