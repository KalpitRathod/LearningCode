/*
pointer aithmatic
address points to my variables i (integer 4 bytes=32 bits)
1 byte = 8 bits and i think every byte has its own address.
let me see the contents of address 1, i mean they say its unsafe? i did wiht ptr = (int *)0x1; it returned nothing. 
int *ptr = (int *)0x6422296;

char is 1 byte.
float is 4 byte.
*/

#include <stdio.h>

int main() {
    int i = 1;
    int *ptr = &i;
    char itsch = 'a';
    char *ptrch = &itsch;


    printf("%u\n", ptr);
    ptr++;
    printf("%u\n", ptr);

    printf("\n");

    printf("%u\n", ptrch);
    ptrch++;
    printf("%u\n", ptrch);

    printf("\n");

    printf("%u", (int)ptrch - (int)ptr);
    return 0;
}