#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
 //Challenge 13 : Affichage des valeurs binaire et hexadécimale équivalentes
 int main() { 
    char nomber[10]; 
    printf("enter la nomber : "); 
    scanf("%s", nomber); 
    if(nomber[0]=='0' && (nomber[1]=='b' || nomber[1]=='B')){
        printf("binaire\n");
    }else if(nomber[0]=='0' && (nomber[1]=='x' || nomber[1]=='X')){
        printf("Hexadécimal\n");
    }else{
        printf("Décimal\n");
    }
    
    
   return 0; 
}