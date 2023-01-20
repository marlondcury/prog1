#include <stdio.h>

int main (){

    int  i = 1, op = 1;
    char comodo[20];
    float larg, compr, area_comodo = 0, area_total = 0;


    while (i == 1){

        if(op == 1){
            printf ("Digite o comodo que serah inserido as medidas:\n");
            scanf ("%s", comodo);
            printf ("Digite a LARGURA em metros:\n");
            scanf ("%f", &larg);
            printf ("Difite o COMPRIMENTO em metros:\n");
            scanf ("%f", &compr);

            area_comodo = larg * compr;
            printf ("O comodo %s tem %.2f m2\n", comodo, area_comodo);
            area_total = area_total + area_comodo;

            printf ("\nDeseja inserir novo comodo? Digite (1 - SIM e 0 - NAO)\n");
            scanf ("%d", &op);
        }
            else if (op == 0){
            printf ("\n\nA area total da residencia eh: %.2f", area_total);
            i++;

        }
        else {
            printf ("Opcao Invalida. Digite (1 - SIM e 0 - NAO)\n");
            scanf ("%d", &op);
        }

    }


    return 0;

}
