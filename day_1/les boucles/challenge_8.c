//Challenge 8 : Affichage de la Suite de Fibonacci
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int n;
    printf("saisier n \n");
    scanf("%d", &n);
    int a=0, b=1, c=0;
    printf("a=%d et b=%d\n", a,b);
    for(int i=2; i<=n; i++){
        c=a+b;
        printf("%d=%d+%d\n", c,a,b);
        a=b;
        b=c;
    }
    return 0;
}