#include<stdio.h>
#include <string.h>
//#define N 5 
struct Etudiant{
    char nom[50];
    char prenom[50];
    int note[N];

};
int main(){
    struct Etudiant etu;
    printf("saisir lr nom: \n");
    scanf("%s", etu.nom);
    printf("saisir le prenom: \n");
    scanf("%s", etu.prenom);
    printf("saisir la note: \n");
    scanf("%d", &etu.note);
    return 0;
}