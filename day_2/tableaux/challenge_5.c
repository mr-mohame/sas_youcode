#include<stdio.h>
//Challenge 4 : Trouver le minimum
int main(){
int tab_element[5];
int min;
//int min = 20000000;]
min = tab_element[1];
for(int i = 0; i < 5; i++){
    printf("l'element %d : ", i+1);
    scanf("%d", &tab_element[i]);
    if(tab_element[i]<min){
        min = tab_element[i];
    }    
}
printf("le minimum élément dans un tableaut est : %d\n", min);

    return 0;
}