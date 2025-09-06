#include<stdio.h>
#include<string.h>
//Challenge 14 : Calculer la Moyenne
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
    float Moyenne;
    float sum_total=0;
    for(i=0; i<taille;i++){
        sum_total+=tab_1[i];  
         
    }
    Moyenne=sum_total/taille; 
    printf("la moyenne est: %.2f\n", Moyenne);
    return 0;
    
}