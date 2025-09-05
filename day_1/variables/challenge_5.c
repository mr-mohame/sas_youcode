#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//Challenge 5 : Affichage Température


int main()
{
    int Celsius;
    
    printf("enter la température en Celsius: ");
    scanf("%d", &Celsius);
    if(Celsius<0){
        printf("Solide\n");

    }else if(Celsius<=0 && Celsius<100){
        printf("Liquide\n");

    }else{
        printf("Gaz\n");

    }
    

    return 0;
}