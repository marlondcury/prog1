#include <stdio.h>

#define tam 20
char nome(char x[]);

int main(){
    char apelido[tam];

    nome(apelido);
    printf("%s\n", apelido);

    return 0;
}

char nome(char x[]){

    printf("Digite o seu nome\n");
    scanf("%s", x);

    return x;
}