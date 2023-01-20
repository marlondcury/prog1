#include <stdio.h>

int main(){

    int horas_extras, horas_faltas;
    float h, grat;

    printf ("Insira a quantidade de Horas Extras do funcionario:\n");
    scanf ("%d", &horas_extras);
    printf ("Insiras a quantidade de horas que o funcionario faltou:\n");
    scanf ("%d", &horas_faltas);

    h = ((horas_extras) - 2/3*(horas_faltas));


    if (h>=2400){
       grat = 500;
    }
    else if (h>=1800){
        grat = 400;
    }
    else  if (h>=1200){

       grat = 300;
    }
    else if (h>=600){
        grat = 200;
    }
    else {
        grat = 100;
    }

    printf ("Gratificacao: R$%.2f.\n", grat);

    return 0;
}
