#include<stdio.h>
#include <string.h>
struct personne{
    char nom[50];
    char prenom[50];
    int age;

};
int main(){
    struct personne M={"lamssiah", "mohamed", 27};
    printf("nom : %s\n",M.nom);
    printf("prenom : %s\n",M.prenom);
    printf("age : %d\n",M.age);
}