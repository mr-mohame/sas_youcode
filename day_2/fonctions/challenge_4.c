#include<stdio.h>
//Challenge 4 : Fonction de Minimum
int Minimum(int a, int b){
    if(a<b){
        return a;
    }else{
        return b;
    }
    
}
int main(){
    int resultat= Minimum(4,5);
    printf("le minimum  est : %d\n", resultat);
}