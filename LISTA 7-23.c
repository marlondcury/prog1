#include <stdio.h>
#define tam 2
#define car 20

typedef struct CR
{
    char nome[car]; 
    float p1;
    float p2;
    float pt;
    int presenca;
} Estudante;

void PAUTA(int x);
int MEDIA(int p, float a, float b, float c);

int main(){
    int x;
    PAUTA(x);
    return 0;
}

void PAUTA(int x){
    int i, aprovado = 0, reprovado = 0, resultado;
    Estudante aluno[tam];
    
    //Lendo os valores
    for (i = 0; i < tam; i++){
        printf("Digite seu nome:\n");
        scanf("%s", aluno[i].nome);
        printf("Digite sua nota na prova 1:\n");
        scanf("%f", &aluno[i].p1);
        printf("Digite sua nota na prova 2:\n");
        scanf("%f", &aluno[i].p2);
        printf("Digite sua nota no trabalho:\n");
        scanf("%f", &aluno[i].pt);
        printf("Digite sua frequencia em porcentagem(somente numero):\n");
        scanf("%d", &aluno[i].presenca);
        //Calculando
        resultado = MEDIA(aluno[i].presenca, aluno[i].p1, aluno[i].p2, aluno[i].pt);

        if(resultado == 1){
            aprovado++;
        }
        else{
            reprovado++;
        }
    }
    
    //Mostrando os resultados
    printf("O numero de alunos aprovados foram de %d e o de reprovados %d\n", aprovado, reprovado);
}

int MEDIA(int p, float a, float b, float c){
    int i, aprov = 0;
    float media;

    if (p >= 75){
        media = ((a+b)*0.7)+(c*0.3);
        if (media >= 6){
            aprov++;
        }
        else{
            aprov = 0;
        }
    }
    else{
        aprov = 0;
    }
    return aprov;
}