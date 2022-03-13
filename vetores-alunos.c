2#include <stdio.h>

int main () {
    float nota[5];
    float media, soma;
    int i;
    soma=0;

    for (i=0;i<5;i++) {
        printf ("Digite a %i nota",i+1);
        scanf ("%f",&nota[i]);
        soma += nota[i];
    }
    media = soma / 5;
    printf("A media do aluno eh %f",media);
    return 0;
}