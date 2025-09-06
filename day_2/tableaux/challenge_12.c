#include<stdio.h>
#include<string.h>
//Challenge 12-13 : Afficher les Éléments Paire || impaire



int main(){
    int i, taille;
    
    printf("saisir la taille de tableux :");
    scanf("%d", &taille);
    int tab_1[taille];
    printf("===========remplir le tableux===========\n");
    for(i=0; i<taille; i++){
        printf("saisir les element %d:",i);
        scanf("%d", &tab_1[i]);
    }
    int trouve;
    for(i=0; i<taille;i++){
        if(tab_1[i] % 2 == 0){
            trouve=tab_1[i];
            printf("le %d est un nomber paire.\n", trouve);
        }else if(tab_1[i] % 2 != 0){
            trouve=tab_1[i];
            printf("le %d est un nomber impaire.\n", trouve);

        }           
    }
    return 0;
    
}