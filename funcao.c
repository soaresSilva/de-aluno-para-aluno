#include <stdio.h>;

int global =2;

int main () {
    void imprima (void);
    imprima ();
    imprima ();
    
    printf("global : %d",global);
    return 0;
}

void imprima (void) {
    int a[25];
    printf ("Nomeeeeeeeeeeee!!!\n");
    gets (&a);
    puts (a);
    int var = 2;
    static int vr = 2;
    vr *=2;
    var*=2;
    printf("%d\n",var);
    printf("%d\n",vr);
    global*=2;
    
}