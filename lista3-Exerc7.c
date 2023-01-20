#include <stdio.h>


int main (){

    int i, N, R;

    scanf ("%d", &N);

    R = 1;

    for (i = 2; i < N; i++){

        R = R * 2;
    }

    printf ("%d\n", R);


    printf ("_______________________________________________________\n");
    printf ("Usando while.\n");

    scanf ("%d", &N);
    R = 1;
    i = 2;

    while (i < N){

        R = R * 2;
        i++;

    }
     printf ("%d\n", R);

     printf ("_______________________________________________________\n");
     printf ("Usando do-while.\n");

        scanf ("%d", &N);
        R = 1;
        i = 2;

    do{

        R = R * 2;
        i++;

    }
    while (i < N);
    printf ("%d\n", R);
    return 0;

}



