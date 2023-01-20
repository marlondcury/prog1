#include <stdio.h>

int main(){
    float peso_total, valor_total, valor_a, peso_an, preco_total, peso_total_acumu, quant_a;

    printf("Digite o valor de arroba:\n");
    scanf("%f", &valor_a);
    do{
        printf("Digite o peso do animal:\n");
        scanf("%f", &peso_an);
        printf("\n");

    if (peso_an != 0){
        peso_total += peso_an;
    }

    } while(peso_an != 0);

    peso_total_acumu = peso_total/2;
    quant_a = peso_total_acumu/15;
    preco_total = quant_a * valor_a;

    printf("O peso total acumulado foi de: %.2f\n", peso_total_acumu);
    printf("O preco total a se pagar eh de: %.2f reais", preco_total);
    return 0;
}