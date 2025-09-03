#include<stdio.h>
//Challenge 3 : Somme des Éléments
int main(){
int tab_element[5];
int somme=0;
for(int i = 0; i < 5; i++){
    printf("Entrer note %d : ", i+1);
    scanf("%d", &tab_element[i]);
    
    somme+=tab_element[i];
}
printf("la somme des element est : %d\n", somme);

    return 0;
}