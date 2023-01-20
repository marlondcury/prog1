#include <stdio.h>

#define tam 5

void calculo(int x[], int i, int *M, int *m, int *sum);

int main(){
    int i, maior = 0, menor = 0, soma = 0, num[tam];

    printf("Insira %d valores:\n", tam);
    for (i = 0; i < tam; i++){
        scanf("%d", &num[i]);
    }
    
    calculo(num, tam, &maior, &menor, &soma);
    printf("O maior e o menor numero no vetor eh %d e %d\n", maior, menor);
    printf("A soma dos valores no vetor eh de %d", soma);

    return 0;
}

void calculo(int x[], int i, int *M, int *m, int *sum){;
    *m = x[0];

    for (i = 0; i < tam; i++){
        if(x[i] < *m){
            *m = x[i];
        }
        else{
            *M = x[i];
        }
        *sum += x[i];
    }
}