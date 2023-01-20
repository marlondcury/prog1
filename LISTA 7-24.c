#include <stdio.h>

void calcMatriz(int *M, int *N, int *K, int A[][*K], int B[][*K], int resultado[][*K]);

int main(){
    int M, N, K, i, j;


    printf("Defina o valor para a linha da matriz 1:\n");
    scanf("%d", &M);
    printf("Defina o valor para a coluna da Matriz 1 e linha da Matriz 2:\n");
    scanf("%d", &N);
    printf("Defina o valor da coluna da Matriz 2:\n");
    scanf("%d", &K);

    int M1[M][N], M2[N][K], resultado[M][K];

    for(i = 0; i < M; i++){
        for(j = 0; j < N; j++){
            printf("Preencha a celula [%d] da linha [%d]:\n", i, j);
            scanf("%d", &M1[i][j]);
        }
    }
    for(i = 0; i < M; i++){
        for(j = 0; j < K; j++){
            printf("Preencha a celula [%d] da linha [%d]:\n", i, j);
            scanf("%d", &M2[i][j]);
        }
    }

    calcMatriz(&M, &N, &K, M1, M2, resultado);
    
    //Matrizes Originais
    for(i = 0; i < M; i++){
        for(j = 0; j < N; j++){
            printf("[%d] ", M1[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    for(i = 0; i < M; i++){
        for(j = 0; j < K; j++){
            printf("[%d] ", M2[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    //Matriz Resultado
    printf("O valor da multiplicacao entre as matriz eh:");
    printf("\n");
    for(i = 0; i < M; i++){
        for(j = 0; j < K; j++){
            printf("[%d] ", resultado[i][j]);
        }
        printf("\n");
    }
    printf("Acabou!");

    return 0;
}

void calcMatriz(int *M, int *N, int *K, int A[][*K], int B[][*K], int resultado[][*K]){
    int i, j, x = 0, cont;

    for(i = 0; i < *M; i++) {
		for(j = 0; j < *N; j++) {
			
			resultado[i][j] = 0;
			for(cont = 0; cont < *K; cont++) {
				x +=  A[i][cont] * B[cont][j];
			}
			resultado[i][j] = x;
			x = 0;
		}
	}
}