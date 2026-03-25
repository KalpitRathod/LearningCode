/*
Create a two dimensional vector using structures in C
*/

struct twoDimVector {
    float i;
    float j;
};

#include <stdio.h>

int main() {
    struct twoDimVector v1;

    v1.i = 12.5;
    v1.j = 42.3;

    
    return 0;
}