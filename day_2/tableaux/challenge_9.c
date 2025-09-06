#include<stdio.h>
#include<string.h>
//Challenge 9 : Inversion d'un Tableau

int main(){
    int i, j, x=0;
    int tab_1[5]={1,2,3,4,5};
    int tab_2[5];
    for(i=0; i<5; i++){
        for(j=4; j>=i; j--){
            tab_2[j] = tab_1[i]; 
            tab_2[j] = tab_1[4-i];
        }        
    }
    printf("\n");
    //afficher tab_1
    for(i=0; i<5; i++){
        printf("%d\n", tab_1[i]);
    }
    printf("\n");
    //affiche tba 2
    for(j=0; j<5; j++){
        printf("%d\n", tab_2[j]);
    }
     

    return 0;
}