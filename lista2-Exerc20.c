#include <stdio.h>

int main(){

    int idade;
    float peso;

    printf("Insira sua idade:\n");
    scanf("%d", &idade);
    printf("\nInsira seu peso:\n");
    scanf("%f", &peso);

    if (idade<20){
        if (peso<60){
            printf("Grupo de Risco 9 - Menor de 20 anos e Menos de 60kg.\n");
        }
        else if (peso<90){
            printf("Grupo de Risco 8 - Menor de 20 anos e entre 60kg e 90kg.\n");
        }
        else{
            printf("Grupo de Risco 7 - Menor de 20 anos e Acima de 90kg.\n");
        }
    }
    else if (idade<50){
       if (peso<60){
            printf("Grupo de Risco 6 - Entre 20 e 50 anos e Menos de 60kg.\n");
        }
        else if (peso<90){
            printf("Grupo de Risco 5 - Entre 20 e 50 anos  e entre 60kg e 90kg.\n");
        }
        else{
            printf("Grupo de Risco 4 - Entre 20 e 50 anos  e Acima de 90kg.\n");
        }
    }
    else{
        if (peso<60){
            printf("Grupo de Risco 3 - Acima de 50 anos e Menos de 60kg.\n");
        }
        else if (peso<90){
            printf("Grupo de Risco 2 - Acima de 50 anos  e entre 60kg e 90kg.\n");
        }
        else{
            printf("Grupo de Risco 1 - Acima de 50 anos  e Acima de 90kg.\n");
        }
    }
    return 0;
  }

/*20) Faça um programa em C que receba a idade e o peso de uma pessoa. De acordo com
a tabela a seguir, verifique e mostre em qual grupo de risco essa pessoa se encaixa.
IDADE Até 60 Kg Entre 60 e 90 Kg Acima de 90 Kg
Menores de 20 9 8 7
De 20 a 50 6 5 4
Maiores de 50 3 2 1
*/
