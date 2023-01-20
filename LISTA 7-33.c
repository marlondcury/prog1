#include <stdio.h>

int fatorial(int x);

int main(){
    int n;

    printf("Insira um valor para calcular um fatorial:\n");
    scanf("%d", &n);

    fatorial(n);

    if(fatorial(n) > 0){
        printf("O valor do fatorial eh: %d", fatorial(n));
    }
    else{
        printf("Nao foi possivel calcular o fatorial!");
    }

    return 0;
}

int fatorial(int x){
    int fat;

    if(x > 0){
        for(fat = 1; x > 1; x = x - 1){
            fat = fat * x;
        }
    }
    else if (x == 0){
        fat = 1;
    }
    else{
        fat = -1;
    }

    return fat;
}