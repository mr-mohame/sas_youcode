
#include<stdio.h>

int main(){
    //Demander un nombre et afficher son carré et son cube.
    int x, carre=0, cube=0;
    printf("enter x\n");
    scanf("%d", &x);
    carre = x*x;
    cube = x*x*x;

    printf("le carre de x est : %d \n", carre);
    printf("la cube de x est : %d \n", cube);
    return 0;

}