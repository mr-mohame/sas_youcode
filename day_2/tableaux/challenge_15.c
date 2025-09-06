#include<stdio.h>
#include<string.h>
//Challenge 15 : Fusion de Deux Tableaux

int main(){
    int i, j, taille_1, taille_2;
    printf("===========la taille de tableux 1===========\n");
    printf("saisir la taille de tableux 1 :");
    scanf("%d", &taille_1);
    printf("===========la taille de tableux 2===========\n");
    printf("saisir la taille de tableux 2 :");
    scanf("%d", &taille_2);

    int tab_1[taille_1], tab_2[taille_2];
    int tabFusion[taille_1 + taille_2];
    printf("===========remplir les tableux 1===========\n");
    for(i=0; i<taille_1; i++){
        printf("saisir les element %d:",i);
        scanf("%d", &tab_1[i]);
        tabFusion[i] = tab_1[i];
    }
    printf("===========remplir les tableux 2===========\n");
    for(j=0; j<taille_2; j++){
        printf("saisir les element %d:",j);
        scanf("%d", &tab_2[j]);
        tabFusion[taille_1 + j] = tab_2[j];
    }
    printf("=== Tableau fusionné ===\n");
    for(i = 0; i < taille_1 + taille_2; i++){
        printf("%d\n", tabFusion[i]);

    }
    return 0;
    
}