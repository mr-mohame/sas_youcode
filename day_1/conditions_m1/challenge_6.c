#include <stdio.h>
#include <stdlib.h>
//Challenge 6 : Positif, Négatif ou Nul

int main()
{
    int x;
    printf("enter x \n");
    scanf("%d", &x);
    if(x>0){
        printf("le nomber qui donne est positif.\n");

    }else if(x<0){
        printf("le nomber qui donnee est negatif. \n");

    }else{
        printf("le nomber est egal a zero");
    }
    return 0;
}