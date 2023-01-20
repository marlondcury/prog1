#include <stdio.h>
float conv(float *feet);

int main(){
    float pes, m;

    printf("Insira um valor em pes:\n");
    scanf("%f", &pes);
    
    m = conv(&pes);

    printf("O valor em metros eh: %.3f\n", m);

    return 0;
}

float conv(float *feet){
    float x;
    
    x = *feet*3.281;

    return x;
}