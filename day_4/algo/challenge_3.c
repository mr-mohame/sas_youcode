#include<stdio.h>
//Tri par Sélection
//fonctaion pour tri par selection  coissant
void triselection(int T[], int taille){
    int temp;
    for(int i=0; i<taille-1; i++){
       int min_index=i;
        for(int j=i+1; j<taille; j++){
            if(T[j]<T[min_index]){
                min_index=j;
            }
            temp=T[i];
            T[i]=T[min_index];
            T[min_index]=temp;
        }
    }
}
//fonctaion pour laffichage
void afficherTableux(int T[], int taille){
    for(int i=0; i<taille; i++){
        printf("%d ",T[i]);
    }
    printf("\n");
} 


int main(){
    int taille=7;
    int T[]={1,4,7,9,10,25,0};
    printf("-----------------\n");
    printf("tableux\n");
    afficherTableux(T, taille);
    printf("-----------------\n");
    triselection(T, taille);
    printf("le tableux coissant.\n");
    afficherTableux(T, taille);
    return 0;
}