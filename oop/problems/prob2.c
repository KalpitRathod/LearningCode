/*
Write a program having a variable i. Print the address of i. Pass this variable to a function and print its address. Are these addresses same? why?
*/

#include <stdio.h>

void passingFunc(int a);

int main() {
    int i;
    printf("Address of i is %u.\n", &i);
    passingFunc(i);
    return 0;
}

void passingFunc(int a) {
    printf("Address of a is %u.\n", &a);
}