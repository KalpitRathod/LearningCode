/*
function calls
1. call by value->if you pass value of variable it can only work with copy of that variable.
2. call by reference->if you pass address of variable it can access that exact variable.
*/
#include <stdio.h>

void swap(int *a, int *b);

int main() {
    int x=4, y=5;
    swap(&x, &y);
    printf("x=%d, y=%d", x, y);
    return 0;
}

void swap(int *a, int *b) {
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}