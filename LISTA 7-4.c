#include <stdio.h>

float dobrarNum(float num);

int main(){
    float x;

    printf("Digite um numero\n");
    scanf("%f", &x);
    
    printf("O dobro deste eh: %.2f\n", dobrarNum(x));

    return 0;
}

float dobrarNum(float num){
    int y;

    y = num*2;

    return y;
}