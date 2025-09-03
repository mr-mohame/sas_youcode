#include<stdio.h>
int main(){
    int num_produit;
    float prix_fix=125.00, prix_total=0;
    float remise;

    printf("saisier les num de produit\n");
    scanf("%d", &num_produit);
    if(num_produit==1){
        printf("aucune remise\n");
        printf("le montant total est 125.00 dhs.");
    }else if(num_produit>=2){
        for(int i=1; i<=num_produit;i++){
            remise = (-(i-1)*0.02+1)*prix_fix;
            prix_total+=remise;
        }
        printf("le montant total avec remis est : %.2f\n", prix_total);
        

    }
    return 0;

}