/*
Create a two dimensional vector using structures in C.
Write a function sum Vector which returns the sum of two vectors passed to it.
The vector must be two dimensional.
*/

typedef struct twoDimVector {
    float i;
    float j;
} vec2d;

#include <stdio.h>

vec2d vectorSum(vec2d v1, vec2d v2);

int main() {
    vec2d v1, v2;

    v1.i = 2;
    v1.j = 4;

    v2.i = 3;
    v2.j = 5;

    vec2d sumIs = vectorSum(v1, v2);

    printf("%f i + %f j", sumIs.i, sumIs.j);
    return 0;
}

vec2d vectorSum(vec2d v1, vec2d v2) {

    vec2d sum;

    sum.i = v1.i + v2.i;
    sum.j = v1.j + v2.j;

    return sum;
}
