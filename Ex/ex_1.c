#include<stdio.h>

int main(){
    //Calculatrice avancée avec vérification
    int a, b;
    char op;
    printf("enter a:\n");
    scanf("%d", &a);
    printf("enter b:\n");
    scanf("%d", &b);
    printf("enter operateur:\n");
    scanf(" %c", &op);
    if(op == '+'){
        printf(" la somme de a et b : %d\n", a+b);

    }else if(op == '-'){
        printf(" la soustraction de a et b : %d\n", a-b);

    }else if(op == '*'){
        printf(" la multi de a et b : %d\n", a*b);
        
    }else if(op == '/'){
        if(b != 0){
            printf(" la division de a et b : %d\n", a/b);

        }else{
            printf("erreur\n");

        }
        
    }else{
        printf("l'operateur invalid\n");

    }
    return 0;

}