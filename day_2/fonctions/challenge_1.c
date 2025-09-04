#include<stdio.h>
//Challenge 1 : Fonction de Somme
int Somme(int a, int b){
    return a+b;
}
int main(){
    int resultat=Somme(4,5);
    printf("la somme est : %d\n", resultat);
}