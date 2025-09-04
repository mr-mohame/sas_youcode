#include<stdio.h>
//Challenge 2 : Fonction de Multiplication
int Multiplication(int a, int b){
    return a*b;
}
int main(){
    int resultat= Multiplication(4,5);
    printf("la multiplication est : %d\n", resultat);
}