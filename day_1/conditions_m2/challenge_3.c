#include <stdio.h>
#include <stdlib.h>
//Challenge 3 : Gestion des Congés



int main()
{
    int conge_Accordee;
    int conge_Utilise;
    int statu_Employe;
    int jours_Restants=0;

    printf("saisiez les jours de congés accordés: ");
    scanf("%d", &conge_Accordee);
    printf("saisiez les jours de congés utilisés: ");
    scanf("%d", &conge_Utilise);
    printf("saisiez le Statut de l'employé : ");
    scanf("%d", &statu_Employe);
    if(statu_Employe==1){
        jours_Restants=conge_Accordee-conge_Utilise;
        if(conge_Utilise>conge_Accordee){
        printf("Attention, dépassement des jours de congés !\n");
        }else {
            printf("Jours restants : %d\n", jours_Restants);
        }
    }else{
        jours_Restants=(conge_Accordee/2)-conge_Utilise;
        if(conge_Utilise>conge_Accordee/2){
        printf("Attention, dépassement des jours de congés !\n");
        }else {
            printf("Jours restants : %d\n", jours_Restants);
        }

    }
    

    
    return 0;
}
