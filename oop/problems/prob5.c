/*
Write a program to print the value of a variable i by using "pointer to pointer" type of variable
*/

#include <stdio.h>

int main() {
    int i = 5;
    int *a;
    int **b;

    a = &i;
    b = &a;

   printf("%d", *(*b));
   return 0;
}