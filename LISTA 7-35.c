#include <stdio.h>

int fatorial(int x, int y);

int main(){
    int n, p, C;

    printf("Insira um valor para n:\n");
    scanf("%d", &n);
    printf("Insira um valor para p:\n");
    scanf("%d", &p);

    fatorial(n,p);

    if(fatorial(n,p) > 0){
        printf("O numero de combinacoes eh: %d", fatorial(n,p));
    }
    else{
        printf("Nao foi possivel calcular!");
    }

    return 0;
}

int fatorial(int x, int y){
    int fat, n1, n2, r, R;
    r = x-y;

    //Calculando n1
    if(x > 0){
        for(n1 = 1; x > 1; x = x-1){
            n1 = n1 * x;
        }
    }
    else if(x == 0){
        n1 = 1;
    }

    //Calculando n2
    if(y > 0){
        for(n2 = 1; y > 1; y = y-1){
            n2 = n2 * y;
        } 
    }
    else if(y == 0){
        n2 = 1;
    }
    
    //Calculando r
    if(r > 0){
        for(R = 1; r > 1; r = r-1){
            R = R * r;
        }
   }
    else if(r == 0){
        r = 1;
    }
    //printf("%d", R);

    fat = n1/(n2*R);

    return fat;
}