#include <stdio.h>

int main (){

    char sexo, nome[20];
    int idade;

    printf ("Insira seu nome:\n");
    scanf ("%s", nome);
    printf ("Insira seu sexo (M - Masculino e F - Feminino):\n");
    scanf (" %c", &sexo);
    printf ("Insira sua idade:\n");
    scanf ("%d", &idade);

    if (idade<18){
        printf ("\n%s eh MENOR.\n", nome);
    }
    else if (sexo=='M'&&idade>=65){
        printf ("\n %s esta APOSENTADO.\n", nome);
    }
    else if (sexo=='F'&&idade>=60){
        printf ("\n %s esta APOSENTADA.\n", nome);
    }
    return 0;
}