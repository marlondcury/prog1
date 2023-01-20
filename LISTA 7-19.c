#include <stdio.h>

void tempo(int x, int *a, int *b, int *c);

int main(){
    int seg, H, M, S;

    printf("Digite um valor de tempo em segundos:\n");
    scanf("%d", &seg);

    tempo(seg, &H, &M, &S);
    printf("%d:%d:%d", H, M, S);

    return 0;
}

void tempo(int x, int *a, int *b, int *c){

    *a = x/3600;
    *b = (x%3600)/60;
    *c = (x%3600)%60;

}