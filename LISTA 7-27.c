#include <stdio.h>

void romano(int num);

int main(){
    int x;

    printf("Digite um numero de 1 a 50:\n");
    scanf("%d", &x);
    romano(x);

    return 0;
}

void romano(int num){
    int uni, dez, i;

    if ((num > 9)&&(num <= 50)){
        if (num < 40){
            for(i = 0; i<(num/10); i++){
                printf("X");
            }
        }
        else if (num < 50){
            printf("XL");
        }
        else{
            printf("L");
        }
        uni = num%10;
    }
    if(uni < 10){
        switch (uni){
        case 1:
            printf("I\n");
            break;
        case 2:
            printf("II\n");
            break;
        case 3:
            printf("III\n");
            break;
        case 4:
            printf("IV\n");
            break;
        case 5:
            printf("V\n");
            break;
        case 6:
            printf("VI\n");
            break;
        case 7:
            printf("VII\n");
            break;
        case 8:
            printf("VIII\n");
            break;
        case 9:
            printf("IX\n");
            break;
        default:
            break;
        }
    }
}