#include<stdio.h>
//Challenge 5 : Fonction de Factorielle
int Factorielle(int a){
    if(a<0){
        printf("le nomber qui donne et negatif");
        return -1;
    }
    int fact=1;
    for(int i=1; i<=n; i++){
        fact*=i;
    }
    return fact;
    
    
}
int main(){
    int n;
    printf("donnet n:\n");
    scanf("%d", &n);
    int resultat= Factorielle(n);
    printf("le Factorielle  est : %d\n", resultat);
    
}