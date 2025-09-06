#include <stdio.h>
#include <stdlib.h>
//Challenge 7 : Calcul des Impôts
int main()
{
    int Revenu, impots=0;
    int statut_fiscal;
    int deductions;
    int revenu_imposable=0;
    int deductions_total=0;
    int deductions_auto=0;

    printf("saisiez le Revenu annuel (en euros): ");
    scanf("%d", &Revenu);
    printf("saisiez le Statut fiscal (1 pour célibataire, 2 pour marié, 3 pour chef de famille): ");
    scanf("%d", &statut_fiscal);
    printf("saisiez la Déductions (en euros): ");
    scanf("%d", &deductions);
    printf("\n");


    if(deductions==1){
        deductions_auto=1000;
        
    }else if(deductions==2){
        deductions_auto=2000;
        
    }else if(deductions==3){
        deductions_auto=3000;
        
    } 
    deductions_total=deductions_auto+deductions;
    revenu_imposable=Revenu-deductions_total;

    printf("\n");

    if(revenu_imposable <= 20000){
        impots=revenu_imposable*0.05;
    }else if(revenu_imposable>=20000 && revenu_imposable<=50000){
        impots=revenu_imposable*0.10;
    }else if(revenu_imposable>50000){
        impots=revenu_imposable*0.20;
    }
    printf("\n");
    printf("Le revenu annuel de départ est :%d\n", Revenu);
    printf("Les déductions appliquées est :%d\n", deductions);
    printf("Le revenu imposable est :%d\n", revenu_imposable);
    printf("L’impôt final à payer est :%d\n", impots);
    






    
  
    return 0;
}
