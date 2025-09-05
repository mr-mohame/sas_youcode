#include <stdio.h>
#include <stdlib.h>
//Challenge 4 : Évaluation de Performance d'Employé



int main()
{
    int Budget, score=0;
    int Destination;
    int n_Personnes;

    printf("saisiez le Budget (en euros): ");
    scanf("%d", &Budget);
    printf("saisiez la Destination (1 pour plage, 2 pour montagne, 3 pour ville): ");
    scanf("%d", &Destination);
    printf("saisiez le Nombre de personnes: ");
    scanf("%d", &n_Personnes);

    if(Budget >= 1000){
        printf("Voyage haut de gamme\n");
    }else if(Budget<=500 && Budget<1000){
        printf("Voyage moyen\n");
    }else if(Budget<500){
        printf("Voyage économique\n");
    }
    if(Budget>=1000 && n_Personnes>2){
        printf("Plage\n");
    }else if(Budget>=500 && n_Personnes<=2){
        printf("Montagne\n");
    }else{
        printf("Ville\n");
    }    
    return 0;
}
