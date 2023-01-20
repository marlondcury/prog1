#include <stdio.h>

#define tam 30
int i;
float METADE(float A[]);

int main(){
    float x[tam];

    METADE(x);

    return 0;
}

float METADE(float A[]){
    float meio[tam];
    //Calculos
    printf("Digitem %d numeros:\n", tam);
    for(i = 0; i < tam; i++){
        scanf("%f", &A[i]);
        meio[i] += (A[i]/2);
    }
    //Demonstrandoo calculo
    for (i = 0; i < tam; i++){
        printf("[%.2f]\n", meio[i]);
    }
}