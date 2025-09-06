#include <stdio.h>

int main() {
    int n;
    printf("Saisir le nombre de lignes: ");
    scanf("%d", &n);
    if(n<1){
        printf("%d n’est pas premier\n", n);
    }


    for (int i = 1; i <= n; i++) {
        if(n % i ==0){
            printf("%d n’est pas premie. \n", i);
        }else{
            printf("%d est pas premie. \n",i);
        }
        
    }

    return 0;
}
