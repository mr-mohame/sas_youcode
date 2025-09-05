#include <stdio.h>
#include <stdlib.h>
//Challenge 2 : Calcul de Prime d'Assurance Auto


int main()
{
    int age;
    int type_voiture, N_accident;
    float prime;
    float prime_finale=0;

    printf("saisiez l'age: ");
    scanf("%d", &age);
    printf("saisiez le type voiture: ");
    scanf("%d", &type_voiture);
    printf("saisiez le nomber d'accident: ");
    scanf("%d", &N_accident);
    printf("saisiez le prime de baase: ");
    scanf("%f", &prime);
    prime_finale = prime;

    if(age<25){
        prime_finale *=1.5;
        
    }else if(age>25 && age<65){
        
    }else if(age>65){
        prime_finale *=1.2;
        
    }
    if(type_voiture==1){
        prime_finale *=2;
        
    }else if(type_voiture==2){
        prime_finale *=1.2;
       
    }else if(type_voiture==3){
        prime_finale *=1.1;
        
    }
    if(N_accident>1){
        prime_finale *=1.3;

    }
    printf("La prime finale d'assurance est : %.2f\n", prime_finale);

    
    return 0;
}
