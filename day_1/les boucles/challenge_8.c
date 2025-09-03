#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//Challenge 8 : Affichage de la Suite de Fibonacci
int main()
{
    int n, i, b, a; 
    printf("donner n \n");
    scanf("%d", &n);
    a = 0;
    b = 1;
    printf("la suite de fibonnacci sont : \n");
    printf("a = %d \n", a);
    printf("b = %d \n", b);
    for(i=2;i<n;i++){
       int u = a + b;
       printf("u %d = %d\n", i,u);
       a = b;
       a = u;

    }
    return 0;
}