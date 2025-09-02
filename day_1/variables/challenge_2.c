#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    char letter;
    printf("enter un letter :\n");
    scanf("%c", &letter);
    switch (letter){
        case 'a':
        printf("%c une est voyelles  \n");
        break;
        case 'e':
        printf("%c une est voyelles  \n");
        break;
        case 'i':
        printf("%c une est voyelles  \n");
        break;
        case 'o':
        printf("%c une est voyelles  \n");
        break;
        case 'u':
        printf("%c une est voyelles  \n");
        break;
        case 'y':
        printf("%c une est voyelles \n");
        break;
        default:
        printf("%c n'est pas une voyelle.\n", letter);



    }
    return 0;
}