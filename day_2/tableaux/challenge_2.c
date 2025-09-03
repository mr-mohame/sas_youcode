#include<stdio.h>
//Challenge 2 : Saisie et Affichage des Éléments
int main(){
int tab_element[5];
for(int i = 0; i < 5; i++){
    printf("Entrer note %d : ", i+1);
    scanf("%d", &tab_element[i]);
}
    return 0;
}