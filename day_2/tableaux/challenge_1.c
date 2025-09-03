#include<stdio.h>
//Challenge 1 : Initialisation et Affichage

int main(){
int tab[5]={2, 3, 5, 6, 7};
for(int i = 0; i < 5; i++){
    printf("tab[%d] = %d\n", i, tab[i]);
}
    return 0;
}