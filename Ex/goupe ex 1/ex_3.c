#include<stdio.h>

int main(){
    //Convertir des températures de Celsius en Fahrenheit.
    int Celsius;
    float Fahrenheit=0;
    printf("enter températures en Celsius \n");
    scanf("%d", &Celsius);
    Fahrenheit = (Celsius * 9 / 5) + 32;
    printf("la temperateur est convertir en Fahrenheit: %.2f °F\n", Fahrenheit);
    return 0;

}