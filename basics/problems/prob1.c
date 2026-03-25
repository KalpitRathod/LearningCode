/*
Create an array of 10 numbers verify using pointer arithmatic that (ptr+2) points to the third element 
where ptr is a pointer pointing to the first element of the array
*/

#include <stdio.h>

int main() {
    int myArr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int *ptr;
    ptr = myArr;
    ptr = ptr + 2;
    if(ptr==&myArr[2]){ //equality in the pointers
        printf("These points to same address in the memory.");
    } else {
        printf("It does not.");
    }

    return 0;
}