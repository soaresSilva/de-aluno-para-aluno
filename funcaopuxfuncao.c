#include <stdio.h>

int main () {
    float somadig (float num1, float num2);
    float a,b,soma;
    printf ("Digite dois numeros : ");
    scanf ("%f",&a);
    scanf ("%f",&b);

    soma = somadig(a,b);
    printf ("A soma eh %f",soma);
scanf ("%f",a);
    return 0;
}

    float somadig (float num1, float num2) {
        float valorabs (float x);
        if (num1 < 0) {
            num1= valorabs(num1);
        }
        if (num2 < 0) {
            num2= valorabs(num2);
        }
        return num1 + num2;
    }
    float valorabs (float x) {
        return x*-1;
    }