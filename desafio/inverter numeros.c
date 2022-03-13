#include <stdio.h>
int main () 
{
    int a,restos1,restos2, restos3;
    printf ("digite um numero : ");
    scanf ("%d",&a);
    restos1 = a%10;
    a=a/10;
    restos2 = a%10;
    a=a/10;
    restos3 = a;
    printf ("%i%i%i",restos1,restos2,restos3);
}