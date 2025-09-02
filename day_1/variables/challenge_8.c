#include <stdio.h>
#include <stdlib.h>

int main()
{
    int note;
    printf("enter la d'eleve :");
    scanf("%d", &note);
    if(note<10){
        printf("recle\n");
    }else if(note >= 10 && note < 12){
        printf("passable \n");
    }else if(note >= 12 && note < 14){
        printf("assez bien \n");
    }else if(note >= 14 && note < 16){
        printf("bien \n");
    }else if(note >= 16){
        printf("tres bien \n");
    }else{
        printf("invalide");
    }
    
    return 0;
}