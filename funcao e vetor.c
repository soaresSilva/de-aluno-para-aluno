#include <stdio.h>;

int main (void) {
    int vetor [10] = {6,4,5,3,2,6,9,36,13,10};
    int i;
    void ordemcres(int vetor [], int n);
    
    ordemcres (vetor , 10);
    for (i=0;i<10;i++);
        printf ("%i",vetor[i]);

    return 0;
}

void ordemcres (int vetor [], int n) {
    int i,j,temp;
    for (i=0;i<n;i++){

        for (j=i+1;j<n;j++) {
            if (vetor[i] > vetor[j]) {
            temp = vetor[i];
            vetor [i] = vetor [j];
            vetor[j]=temp;
        }
        }
    }
    
}


    
