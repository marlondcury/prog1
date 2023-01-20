#include <stdio.h>
#define tam 5
void calcMaior(int x[], int *m, int *M);

int main(){
    int num[tam], maior, menor, i;

    printf("Digite cinco valores inteiro:\n");
    for(i = 0; i < tam; i++){
        scanf("%d", &num[i]);
    }
    calcMaior(num, &menor, &maior);

    printf("O segundo e o quarto maior numero no vetor eh %d e %d\n", maior, menor);

    return 0;
}

void calcMaior(int x[], int *m, int *M){
    int i, j, aux;
    aux = x[0];

    for(i = 0; i < tam-1; i++){
        for(j = i+1; j < tam; j++){
            if (x[i] > x[i + 1]) {
            aux = x[i];
            x[i] = x[i + 1];
            x[i + 1] = aux;
            }
        }
    }
    *M = x[1];
    *m = x[3];
}