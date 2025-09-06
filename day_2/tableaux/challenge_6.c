#include<stdio.h>
//Challenge 6 : Multiplication des Élémenen
int main(){
int taille, i; 
printf("---------donne la taille de tableaux-------\n");
printf("donner la taille\n");
scanf("%d", &taille);
int T[taille];
printf("-----------remplir le tableaux--------------\n");
for( i=0; i< taille; i++){
    printf("l'element %d:  ", i+1);
    scanf("%d", &T[i]);
}
int facteur;
printf("---------donne le facteur-------\n");
printf("donner le facteur de multiplication: ");
scanf("%d", &facteur);
printf("---------calcule la multuplication-------\n");
for(i=0; i<taille; i++){
    int mult = T[i] * facteur;
    printf("%d * %d = %d\n", T[i], facteur, mult);
}
    return 0;
}