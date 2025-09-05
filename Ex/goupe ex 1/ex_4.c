#include<stdio.h>

int main(){
    //Calculer l’aire et le périmètre d’un rectangle à partir de la longueur et la largeur.
    float longueur, largeur;
    float aire=0, perimetre=0;
    printf("enter longueur de rectangle \n");
    scanf("%f", &longueur);
    printf("enter largeur de rectangle \n");
    scanf("%f", &largeur);
    aire = longueur*largeur;
    perimetre = (longueur*largeur)*2;

    printf("l’aire d’un rectangle : %.2f \n", aire);
    printf("le périmètre d’un rectangle : %.2f \n", perimetre);
    return 0;

}