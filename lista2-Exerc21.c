#include <stdio.h>

int main(){

    int cod, quant;
    float valor_prod, valor_nota, desc, nota_desc;

    printf ("Insira o Codigo do Produto (entre 1 e 40):\n");
    scanf ("%d", &cod);
    printf ("Insira a quantidade comprada:\n");
    scanf ("%d", &quant);

    if (cod>=1&&cod<=10){
        printf ("\nO produto custa R$10.00.\n");
        valor_prod=10;
        valor_nota=quant*valor_prod;
        printf ("\nValor Total da nota:R$%.2f.\n", valor_nota);
    }
    else if (cod>=11&&cod<=20){
        printf ("\nO produto custa R$15.00.\n");
        valor_prod=15;
        valor_nota=quant*valor_prod;
        printf ("\nValor Total da nota:R$%.2f\n", valor_nota);
    }
    else if (cod>=21&&cod<=30){
        printf ("\nO produto custa R$20.00.\n");
        valor_prod=20;
        valor_nota=quant*valor_prod;
        printf ("\nValor Total da nota:R$%.2f\n", valor_nota);
    }
    else if (cod>=31&&cod<=40){
        printf ("\nO produto custa R$30.00.\n");
        valor_prod=30;
        valor_nota=quant*valor_prod;
        printf ("\nValor Total da nota:R$%.2f\n", valor_nota);

    }


    if (valor_nota<=250){
       desc=valor_nota *0.05;
       printf("\nValor do desconto:R$%.2f.\n", desc);
       nota_desc=valor_nota - (valor_nota*0.05);
       printf("\nValor da Nota com desconto: R$%.2f.\n", nota_desc);
    }
    else if (valor_nota>250&&valor_nota<=500){
        desc=valor_nota *0.10;
        printf("\nValor do desconto:R$%.2f.\n", desc);
        nota_desc=valor_nota - (valor_nota*0.10);
        printf("\nValor da Nota com desconto: R$%.2f.\n", nota_desc);
    }
    else{
        desc=valor_nota *0.15;
        printf("\nValor do desconto:R$%.2f.\n", desc);
        nota_desc=valor_nota - (valor_nota*0.15);
        printf("\nValor da Nota com desconto: R$%.2f.\n", nota_desc);
    }
    return 0;
}
