#include <stdio.h>

int valor(int x);

int main(){
    int num;

    valor(num);
    return 0;
}

int valor(int x){
    int resultado = 0;

    do{
        printf("Digite um valor inteiro entre 0 e 100:\n");
        scanf("%i", &x);
        if ((x >= 0) && (x <= 100)){
            resultado = 1;
        }

    } while (resultado != 1);
}