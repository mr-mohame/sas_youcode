#include<stdio.h>
//Challenge 4 : Trouver le Maximum
int main(){
int tab_element[5]; 
int max;
max = tab_element[0];
for(int i = 0; i < 5; i++){
    printf("l'element %d : ", i+1);
    scanf("%d", &tab_element[i]);
    if(tab_element[i]>max){
        max = tab_element[i];
    }
    
}
printf("le plus grand élément dans un tableaut est : %d\n", max);

    return 0;
}