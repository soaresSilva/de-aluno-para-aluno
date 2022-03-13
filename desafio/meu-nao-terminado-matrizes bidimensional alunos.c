#include <stdio.h>
#include <string.h>

int main () {
    float nota[5][4];
    char aluno [60] [30];
    float media [5];
    float soma [5];
    int i,j,n;

    for (i=0;i<5;i++); {

        for (j=0;j<4;i++); {
        printf ("\t\t\t\nDigite a nota %f do aluno : ",i+1);
        scanf ("%f",&nota[i][j]);
        soma[i]+= nota[i][j];
        }
        
    }
    

    i=0;
    for (i=0;i<5;i++) {
        media[i]= soma[i] / 3;

    }    
    for (i=0;i<5;i++);{
    printf("\t \n Aluno : ");
    puts (aluno[i]);
    printf ("\t Nota media : %f\n",media[i]);
    }
    return 0;
}