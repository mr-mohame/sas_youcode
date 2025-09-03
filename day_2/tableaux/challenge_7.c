#include<stdio.h>
//Challenge 7 : Tableau en Ordre Croissant

int main(){
    int t[6];
    int i, j, change;
    printf("-----------remplir le tableaux--------------\n");
    for( i=0; i< 6; i++){
        printf("l'element %d:  ", i+1);
        scanf("%d", &t[i]);
     }
     //Tri du tableau
     for( i=0; i<6-1; i++){
        for(j=i+1; j<6;j++){
            if(t[i]>t[j]){
                //chane
                change = t[i];
                t[i] = t[j];
                t[j] = change;
            } 
        }
        
     
     }
     printf("---------Afficher le tableau trié-------\n");
        for(i=0; i<6; i++){
        printf("%d\n", t[i]);
        }
     

    return 0;
}