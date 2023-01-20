#include <stdio.h>

int divInt(int x, int y);

int main(){
    int n1, n2, resultado;

    printf("Digite dois numeros inteiros e verifique se sao divisiveis:\n");
    scanf("%d %d", &n1, &n2);
    

    resultado = divInt(n1,n2);
    if(resultado == 1){
        printf("Eh divisivel");
    }
    else{
        printf("Nao eh divisivel");
    }

    return 0;
}

int divInt(int x, int y){
    int valor, VF;

    VF = (x%y);
    if (VF == 0){
        valor = 1;
    }
    else{
        valor = 0;
    }
    return valor;
}