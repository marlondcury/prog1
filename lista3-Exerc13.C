#include <stdio.h>

int main (){

    int cons, cod_cons;
    float kwh, custo_1, custo_2, custo_3 , total_1 = 0, total_2 = 0, total_3 = 0, media;



        do{

            printf ("\nInsira o NUMERO do consumidor\n");
            scanf ("%d", &cons);
            if(cons ==0){
                break;
            }

            printf ("Insira a quantidade de kWh consumidos no mes:\n");
            scanf ("%f", &kwh);

            printf("Digite o CODIGO do consumidor:\n");
            printf ("1 - RESIDENCIAL.\n");
            printf ("2 - COMERCIAL.\n");
            printf ("3 - INDUSTRIAL.\n");
            scanf("%d", &cod_cons);

            if (cod_cons == 1){
                custo_1 = kwh * 0.3;
                printf ("Valor da conta: R$%.2f\n", custo_1);
            }

            else if (cod_cons == 2){
                custo_2 = kwh * 0.5;
                printf ("Valor da conta: R$%.2f\n", custo_2);
            }

            else if (cod_cons == 3){
                custo_3 = kwh * 07;
                printf ("Valor da conta: R$%.2f\n", custo_3);
            }

            else{
                printf ("CODIGO INVALIDO.");
            }

    } while (cons != 0);

            total_1 = total_1 + custo_1;
            printf ("Total RESIDENCIAL: R$%.2f\n", total_1);

            total_2 = total_2 + custo_2;
            printf ("Total COMERCIAL: R$%.2f\n", total_2);

            total_3 = total_3 + custo_3;
            printf ("Total INDUSTRIAL: R$%.2f\n", total_3);

            media = (total_1 + total_2 + total_3)/3;
            printf ("MEDIA GERAL de consumo: R$%.2f", media);

            return 0;
    }
