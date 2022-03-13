#include <stdio.h>

int main () {
    
    void matriz (int x[3][3]);
    
    int print[3][3] = {1,2,3,4,5,6,7,8,9};
    matriz (print);

    return 0;
}

void matriz (int x[3][3])  {
    int j,i;
    for (i=0;i<3;i++) {
        //printf ("digite um numero : ");
        //scanf (x[i][j]);
    
        for (j=0;j<3;j++) {
            //printf ("digite um numero : ");
        //scanf (x[i][j]);
            printf ("%i",x[i][j]);
            printf ("\t");
        }
        printf ("\n");
    }
}