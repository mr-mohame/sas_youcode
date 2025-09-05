#include <stdio.h>
#include <stdlib.h>
//Challenge 4 : Évaluation de Performance d'Employé



int main()
{
    int score_performance, score=0;
    int Anciennete;
    int recompenses_Reçues;
    float bonus=0;

    printf("saisiez le Score de performance (de 0 à 100)s: ");
    scanf("%d", &score_performance);
    printf("saisiez le Ancienneté (en années): ");
    scanf("%d", &Anciennete);
    printf("saisiez le Récompenses reçues (0 pour aucune, 1 pour une, 2 pour deux ou plus): ");
    scanf("%d", &recompenses_Reçues);

    if(score_performance>=90 && Anciennete>=5){
        printf("Excellente\n");
    }else if(score_performance>=70 && Anciennete>=3){
        printf("Bonne\n");
    }else if(score_performance>=50 && Anciennete<3){
        printf("Satisfaisante\n");
    }else{
        printf("Insuffisante\n");
    }
    if(recompenses_Reçues==1){
        bonus=score_performance*0.10;
    }else if(recompenses_Reçues==2){
        bonus=score_performance*0.20;
    }
    score+=bonus;
    printf("Score final (avec bonus) : %d\n", score);
    

    
    return 0;
}
