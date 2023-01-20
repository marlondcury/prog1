#include <stdio.h>


int main(){

    float saldo, novoSaldo;

    printf("Digite o saldo medio\n");
    scanf("%f",&saldo);
    if(saldo>400){

        novoSaldo= (saldo + saldo*0.3);
    printf("O novo salario eh %f\n",novoSaldo);
    }
    else if(saldo <= 400 && saldo >300){
            novoSaldo = (saldo + saldo*0.25);
        printf("O novo saldo eh %f\n",novoSaldo);

    }
    else if (saldo<=300 && saldo>200){
        novoSaldo = (saldo + saldo*0.2);
        printf("o novo saldo eh %f\n",novoSaldo);
    }
    else if (saldo<200){
    novoSaldo=(saldo + saldo*0.1);
    printf("o novo saldo eh %f\n", novoSaldo);
    }
   return 0;
}
