#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int a, b, x;
    printf("enter a \n");
    scanf("%d", &a);
    printf("enter b \n");
    scanf("%d", &b);
    if(a=b){
        printf("les deux nomber est identiques :\n");
        x=(a+b)*3;
        printf("x= %d", x);

    }else{
        printf("les nomber nest pa identiques \n");
        x=a+b;
        printf("x=%d", x);
    }
    return 0;
}