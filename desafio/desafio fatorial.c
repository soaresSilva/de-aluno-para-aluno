#include <stdio.h>
int main () 
{
    int fatorial;
    int resposta = 1;
    printf ("Escolha um numero que quer fatorar : ");
    scanf ("%i",&fatorial);
    for (;fatorial >= 1;--fatorial) {
        resposta *= fatorial; 
    }
    printf ("\n %d \n",resposta);
    return 0;
}
