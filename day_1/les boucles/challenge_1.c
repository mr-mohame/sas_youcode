#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int n, fact;
    printf("enter n \n");
    scanf("%d", &n);
    for(int i=0; i<=10; i++){
        fact = n*i;
        printf("%d*%d=%d \n", n, i, fact);


    }
    return 0;
}