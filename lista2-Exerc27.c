#include <stdio.h>

int main (){

    float peso, altura, imc;

    printf ("Insira seu peso (KG):\n");
    scanf ("%f", &peso);
    printf ("Insira sua altura  (m):\n");
    scanf ("%f", &altura);

    imc = peso / (altura*altura);
        printf ("IMC = %.1f. \n", imc);

    if (imc<20){
        printf ("Voce esta abaixo do peso ideal.\n");
    }
    else if (imc>=20&&imc<25){
        printf ("Parabens! Voce esta em seu peso normal.\n");
    }
    else if (imc>=25&&imc<30){
        printf ("Voce esta acima de seu peso (sobrepeso).\n");
    }
    else if (imc>=30&&imc<35){
        printf ("Obesidade moderada (grau I).\n");
    }
    else if (imc>=35&&imc<40){
        printf ("Obesidade severa (grau II).\n");
    }
    else{
        printf ("Obesidade morbida (grau III).\n");
    }
    return 0;

}
