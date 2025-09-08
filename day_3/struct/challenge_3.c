#include<stdio.h>
#include <string.h>
//#define N 5 
struct rectangle{
    float longueur;
    float largeur;
};
int main(){
    struct rectangle Arg;
    float aire;

    printf("saisir la longueur: \n");
    scanf("%f", &Arg.longueur);
    printf("saisir la largeur: \n");
    scanf("%f", &Arg.largeur);
    aire=Arg.longueur * Arg.largeur;
    printf("l'aire du rectangle: %.2f\n", aire);



    return 0;
}