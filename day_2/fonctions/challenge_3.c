#include<stdio.h>
//Challenge 3 : Fonction de Maximum
int Maximum(int a, int b){
    if(a>b){
        return a;
    }else{
        return b;
    }
    
}
int main(){
    int resultat= Maximum(4,5);
    printf("le plus grand  est : %d\n", resultat);
}