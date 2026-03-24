/*
Write a program to print the address of a variable. Use this address to get the value of this variable.
*/

#include <stdio.h>

int main(){
    int a = 5;
    int *k = &a;
    printf("Address of variable a is %u.\n", k);
    printf("Value of function from this address is %d.", *k);

    return 0;
}