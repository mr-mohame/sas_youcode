#include <stdio.h>
#include <stdlib.h>
#include <math.h>
 //Challenge 12 : Nombre entier à quatre chiffres en ordre inverse
 int main() { 
    int nomber, nom_Inverse=0; 
    printf("enter la nomber : "); 
    scanf("%d", &nomber); 
    while(nomber!=0){ 
        int chiffres=nomber%10; 
        nom_Inverse=nom_Inverse*10+chiffres; 
        nomber= nomber/10; 
    } 
   
   printf("%d\n",nom_Inverse); 
   return 0; 
}