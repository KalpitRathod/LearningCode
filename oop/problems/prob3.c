/*
Write a program to change the value of a variable to ten times of its current value. 
Write a function and pass the value by reference.
*/

#include <stdio.h>

void tentimes(int *a);

int main() {
    int x=4;
    tentimes(&x);
    printf("x=%d", x);
    return 0;
}

void tentimes(int *a) {
    *a = 10*(*a);
}