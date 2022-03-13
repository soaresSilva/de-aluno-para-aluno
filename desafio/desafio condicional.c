#include <stdio.h>
int main () 
{
    int x,i;
    printf("Escolha um numero : ");
    scanf("%i",&x);
    printf("Escolha outro numero : ");
    scanf("%i",&i);

    if (i == 0)
        printf ("\n O numero 2 e 0\n"); 

        else if (x % i == 0) 
            printf ("o numero %i e divisivel por %i",x,i);

            else 
                printf("o numero %i NAO e divisivel por %i",x,i);

    return 0;

}