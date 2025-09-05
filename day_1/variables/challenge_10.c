#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//Challenge 10 : Volume d'une sphère


int main()
{
    int rayon, cube=0;
    float volume=0,  Pi=3.14159;

    printf("enter le rayon : ");
    scanf("%d", &rayon); 
    
   cube = rayon*rayon*rayon;
   volume= (4/3) * Pi * cube;
    
    printf("le volume d'une sphère est: %f\n", volume);
    
    return 0;
}