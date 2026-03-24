/*
lets go, array with pointers
*/

#include <stdio.h>

int main() {
    int hello[4] = {10, 20, 30, 40};
    int *ptr;

    ptr = &hello[0];
    for (int i = 0; i < 4; i++)
    {
        printf("%d, ", *ptr);
        ptr++;
    }
    
    return 0;
}