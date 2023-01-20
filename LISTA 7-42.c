#include <stdio.h>
float conv(float *p);

int main(){
    float pol, cm;

    printf("Insira um valor em polegadas:\n");
    scanf("%f", &pol);
    
    cm = conv(&pol);

    printf("O valor em centimentros eh: %.2f\n", cm);

    return 0;
}

float conv(float *p){
    float x;
    
    x = *p*2.54;

    return x;
}