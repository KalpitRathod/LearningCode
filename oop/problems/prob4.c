/*
Write a program using a function which calculates the sum and avg of two numbers.
Use pointers and print the values of sum and avg in main().
*/

#include <stdio.h>

void sumandavg(int a, int b, int *sum, float *avg);

int main() {
    int sum;
    float avg;
    int a=2, b=3;

    sumandavg(a, b, &sum, &avg);

    printf("sum: %d, avg: %f", sum, avg);
    return 0;
}

void sumandavg(int a, int b, int *sum, float *avg){
    *sum = a+b;
    *avg = ((float)(*sum))/2;
}