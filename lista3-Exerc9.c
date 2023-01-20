#include <stdio.h>

#define n_jog 2

int main (){

    int i = 1;
    float sal, sal_reaj, folha_sal = 0, folha_reaj = 0, percentual_reaj;
    char nome[30];



   for ( i = 1; i <= n_jog; i++){
        printf ("Informe o nome do Jogador: \n");
        scanf ("%s", nome);
        printf ("Informe o salario do Jogador: \n");
        scanf ("%f", &sal);


        if (sal < 0){
            printf ("Salario INVALIDO");

        }

        else if (sal <= 1000){

            sal_reaj = sal + (sal * 0.2);

        }
        else if (sal <=5000){
            sal_reaj = sal + (sal * 0.1);

        }
        else{
            sal_reaj = sal;

        }
         printf ("O jogador %s tem salario atual R$%.2f e salario reajustado R$%.2f\n", nome, sal, sal_reaj);
         folha_sal = folha_sal + sal;
         folha_reaj = folha_reaj + sal_reaj;
    }
    printf ("\n\nA folha de salarios atuais do clube eh: R$%.2f.\n", folha_sal);
    printf ("A folha de salario apos reajuste sera: R$%.2f.\n", folha_reaj);

    percentual_reaj = ((folha_reaj - folha_sal)/folha_sal)*100;
    printf ("\n\nO percentual de reajuste sobre a folha sera %.2f%%", percentual_reaj);

    return 0;

}

