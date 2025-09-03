
#include <stdio.h>
#include <stdlib.h>
//Challenge 10 : Plan de Retraite avec Épargne

int main()
{
    int age, annee_de_cotisation;
    float montant;

    printf("saisiez l'age \n");
    scanf("%d", &age);
    printf("saisiez la anne de cotistaion \n");
    scanf("%d", &annee_de_cotisation);
    printf("saisiez le montant total  \n");
    scanf("%d", &montant);
    if(age>=65 && annee_de_cotisation>=30 && montant>=100000){
        printf("Plan complet avec pension élevée\n");
    }else if(age>=65 && annee_de_cotisation>=20 && montant>=500000){
        printf("Plan partiel avec pension moyenne\n");
    }else if(age<=65){
        printf("Plan épargne non encore disponible\n");
    }
    
    return 0;
}
