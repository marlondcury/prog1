#include <stdio.h>

int main (){

    int n;

    printf ("Insira um valor para N:\n");
    scanf("%d", &n);

    if (n>100){
        printf ("N = %d", n);
    }
    else {
        printf ("N = 0");
    }
    return 0;
}