#include <stdio.h>
int main(){

    int A, B, r, op;

    printf("Informe um numero\n");
    scanf("%d", &A);
    printf("Informe outro numero\n");
    scanf("%d", &B);

    do{
        printf("Digite 1 se quer somar\n");
        printf("Digite 2 se quer subtrair\n");
        printf("Digite 3 se quer multiplicar\n");
        printf("Digite 4 se quer dividir\n");
        printf("Digite 5 se quer o resto da divisao\n");
        scanf("%d", &op);
    }while((op < 1) || (op > 5));

    switch(op){
    case 1:
       r = A+B;
       break;
    case 2:
       r = A-B;
       break;
    case 3:
       r = A*B;
       break;
    case 4:
       r = A/B;
       break;
    default:
        r = A%B;
    }

    printf("O resultado da operacao selecionada eh %d\n", r);
   return 0;
}
