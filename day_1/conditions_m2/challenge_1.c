#include <stdio.h>
#include <stdlib.h>

int main()
{
    int revenu_annuel, score_credit, duree_pret;
    printf("enter le revenu annuel \n");
    scanf("%d", &revenu_annuel);
    printf("enter le score de credit \n");
    scanf("%d", &score_credit);
    printf("enter la duree du pret \n");
    scanf("%d", &duree_pret);
    if(revenu_annuel >= 30000 && score_credit >= 700 && duree_pret <= 10){
        printf("Éligible \n");
    }else if (revenu_annuel >= 30000 && score_credit >= 650 && duree_pret <= 15){
        printf("Éligible avec conditions \n");
    } else if (revenu_annuel < 30000 || score_credit < 650 || revenu_annuel > 15){
        printf("Non éligible \n");
    }





    return 0;
}
