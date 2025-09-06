#include<stdio.h>
int main(){
    int x, i;
    printf("saisir un nomber: ");
    scanf("%d", &x);
    int fact;
    for(i=10; i>0; i--){
        fact=x*i;
        printf("%d * %d = %d\n", x, i, fact);
    }


}