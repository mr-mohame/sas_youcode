#include <stdio.h>

int main() {
    int n;
    printf("Saisir le nombre de lignes: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        // Afficher les espaces
        for (int j = 1; j <= n - i; j++) {
            printf(" ");
        }
        // Afficher les étoiles
        for (int k = 1; k <= 2 * i - 1; k++) {
            printf("*");
        }
        // Passer à la ligne suivante
        printf("\n");
    }

    return 0;
}
