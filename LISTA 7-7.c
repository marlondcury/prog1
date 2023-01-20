#include <stdio.h>
#include <string.h>

#define tam 20

char substantivo(char x[]);

int main(){
    int x , count = 0;

    count = substantivo(x);
    printf("%d\n", count);

    return 0;
}

char substantivo(char x[]){
    int count = 0, i;

    printf("Digite uma frase\n");
    fgets(x, tam, stdin);
    //scanf("%s[^\n]", x);

    for(i = 0; i < tam; i++){
        printf("%d\n", i);
        if(x[i] == ' '){
            count++;
        }
    }

    return count;
}