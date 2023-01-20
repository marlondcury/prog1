#include <stdio.h>
int main(){


    int num1, num2, media, dif, prod, div;
    int opc;
    
    printf("Informe o valor do primeiro numero\n");
    scanf("%d",&num1);
    printf("Informe o valor do segundo numero\n");
    scanf("%d",&num2);
    do{ 
    printf("1 - Media entre os numero digitados\n");
    printf("2 - Diferenca do maior pelo menor\n");
    printf("3 - Produto entre os numeros digitados\n");
    printf("4 - Divisao do primeiro pelo segundo\n");
    scanf("%d", opc);
    } while((opc > 1) || (opc<5)){
        case 1:
            media = ((num1+num2)/2);
        printf("a media entre os numeros eh &f\n",media);
        break;
        case 2:
            if(num1<num2){
                dif= num1-num2;
                printf("%f\n", dif);
            }
            else{
                dif= num2-num1;
                printf("%f\n",num2);
            }
            break;
    case 3:
        prod=num1*num2;
        printf("o produto entre os numeros eh %f\n", prod);
        break;
    case 4:
        div= num1/num2;
        printf("a divisao entre os numeros eh %f\n", div);
        break;



return 0;
}