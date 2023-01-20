#include <stdio.h>

int main(){

    float precoAtu, precoNovo,desc;

    printf("Digite o valor do produto\n");
    scanf("%f",&precoAtu);


    if(precoAtu<=30){

        precoNovo=precoAtu;
        desc=(precoAtu-precoNovo);
        printf("O novo saldo eh de %.2f e o desconto de %.2f\n",precoNovo,desc);
    }
    else if(precoAtu>30 && precoAtu<100){
        precoNovo= (precoAtu - precoAtu*0.1);
        desc=(precoAtu-precoNovo);
        printf("O novo preco eh de %.2f e o desconto de %.2f\n", precoNovo,desc);
    }
    else if(precoAtu>100){
        precoNovo=(precoAtu-precoAtu*0.15);
        desc=(precoAtu-precoNovo);
        printf("O novo preco eg de %.2f e o desconto de %.2f\n", precoNovo, desc);
    }

   return 0;
}
