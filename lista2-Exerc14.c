#include <stdio.h>

int main(){

    float Sal, novoSal, tipo;

    printf("Digite o valor do investimento\n");
    scanf("%f",&Sal);
    printf("Digite o tipo de investimento\n");
    scanf("%f",tipo);

    if(tipo=1){

        novoSal=(Sal+ Sal*0.05);
        printf("O novo saldo eh de %f\n",novoSal);
    }
    else if(tipo=2){
        novoSal=(Sal+Sal*0.04);
        printf("O novo saldo eh de %f\n",novoSal);
    }


   return 0;
}