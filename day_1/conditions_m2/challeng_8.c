#include <stdio.h>
#include <stdlib.h>
//Challenge 9 : Calcul du Salaire avec Primes

int main()
{
    float Salaire;
    int n_Heur;
    int type_poste;
    float Taux_horaire_normal, Salaire_sup, prime, Salaire_total;
    

    printf("saisiez le Salaire de base (en euros): ");
    scanf("%f", &Salaire);
    printf("saisiez le Nombre d'heures supplémentaires: ");
    scanf("%d", &n_Heur);
    printf("saisiez le Type de poste (1 pour junior, 2 pour senior): ");
    scanf("%d", &type_poste);
    printf("\n");

    Taux_horaire_normal = Salaire / 160;
    Salaire_sup=n_Heur*Taux_horaire_normal*1.5;
    if(type_poste==1){
        prime= Salaire*0.10;
        
    }else if(type_poste==2){
        prime= Salaire*0.20;
        
    }

    Salaire_total = Salaire + Salaire_sup + prime;
    printf("Salaire total de l'employe : %.2f €\n", Salaire_total);

    return 0;
}
