#include <stdio.h>


int main(){

    float preco, novopreco;

    printf("Digite o preco\n");
    scanf("%f",&preco);

    if(preco<=50){
        novopreco= (preco + preco*0.05);
        printf("O novo preco eh %.2f\n",novopreco);
    }

    else if(preco>50 && preco<100){
        novopreco = (preco + preco*0.1);
        printf("O novo preco eh %.2f\n",novopreco);
    }

   else if(preco>=100){
        novopreco = (preco + preco*0.15);
        printf("O novo preco eh %.2f\n",novopreco);
    }
    if(novopreco<80){
        printf("Barato\n");
    }

    else if(novopreco>=80 && novopreco<120){
        printf("Normal\n");
    }

    else if (novopreco>120 && novopreco<200){
        printf("Caro\n");
    }
    else if(novopreco>200){
        printf("Muito caro\n");
    }
   return 0;
}