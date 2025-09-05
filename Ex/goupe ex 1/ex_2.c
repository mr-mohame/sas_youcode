#include<stdio.h>

int main(){
    //Demander à l’utilisateur son âge et afficher un message « majeur » ou « mineur ».
    int age;
    printf("enter ton age\n");
    scanf("%d", &age);
    if(age>18){
        printf("majeur\n");
    }else{
        printf("mineur\n");
    }
    
    return 0;

}