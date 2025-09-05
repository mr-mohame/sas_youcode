#include <stdio.h>
#include <stdlib.h>

int main()
{
    float consommation, tarif, montant;
    int type_utilisateur, type_contrat;
    printf("saisiez la consommation en KWh \n");
    scanf("%f", &consommation);
    printf("saisiez le type utilisateur \n");
    scanf("%d", &type_utilisateur);
    printf("saisiez le type contrat \n");
    scanf("%d", &type_contrat);
    if(type_utilisateur == 1){
        if(type_contrat == 0){
            tarif = 0.20;
        }else{
            tarif = 0.15;
        }
    }else if (type_utilisateur == 2){
        if(type_contrat == 1){
            tarif = 0.30;
        }else{
            tarif = 0.25;
        }
    }else {
        printf("invalide. \n");
        return 1;
    }
    montant = consommation * tarif;
    if(consommation>500){
        montant *= 1.10;
    }
    printf(" le montant de la facture est : %.2f euro. \n", montant);
    return 0;
}
