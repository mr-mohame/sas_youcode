#include<stdio.h>

int main(){
    //Demander deux nombres et afficher leur somme, différence, produit et division.
    int a, b;
    printf("enter a\n");
    scanf("%d", &a);
    printf("enter b\n");
    scanf("%d", &b);
    printf("la somme de : %d\n", a+b);
    printf("la différence de : %d\n", a-b);
    printf("la produit de : %d\n", a*b);
    if(b!=0){
        printf("la division de : %d\n", a/b);
    }else{
        printf("Erreur\n");
    }
    return 0;

}