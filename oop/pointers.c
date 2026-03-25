#include <stdio.h>

int main() {

    int a=4;
    printf("%u->%d\n", &a, a); //value of a and address of a 

    int *p;
    p=&a; //assigning address of a to new pointer p
    printf("%u->%d\n", &p, p); //stored address is p and value of p

    int **k;
    k=&p;
    printf("%u->%d\n", &k, k);

    printf("%d\n",*(&a));
    printf("%d\n",*(&p));
    printf("%d\n",*(&k)); 
    return 0;
}
/*
There can be pointer of int, char and float.
*/