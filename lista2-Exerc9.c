#include <stdio.h>


int main(){

    float custo, novoCusto;

    printf("Digite o custo do carro\n");
    scanf("%f",&custo);

    if(custo<=12000){
        novoCusto= (custo + custo*0.05);
        printf("O novo custo eh %f\n",novoCusto);
    }
    else if(custo>12000 && custo<=25000){
            novoCusto = (custo + custo*0.1+custo*0.15);
        printf("O novo custo eh %f\n",novoCusto);

    }
    else if (custo>25000){
        novoCusto = (custo + custo*0.2 + custo*0.15);
        printf("o novo custo eh %f\n",novoCusto);
    }

   return 0;
}
