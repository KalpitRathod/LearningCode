/*
What is union?
Union is a user defined data type (very similar to structures)
The difference between structures and unions lies in the fact that in structure, each member has its own storage location, whereas members of a union uses a single shared memory location.
This single shared memory location is equal to the size of its largest data member.

struct Active Employee {
char Prog1[34];
char Prog2[34];
//in union we share a memory for multiple variables wtf! really good concept like programmer 1 uses that memory and same memory used by programmer 2.
//like 2 brothers use same bat to play cricket.
}

Declaring and accessing union members
Like structures, we access any member by using the member access operator (.) in unions.
We use keyword union to define a union.
Syntax is very similar to that of structure
eg. employee [structure] . [member operator] id [member] = 27;

We can use unions to introduce better memory management in c programs
Union cannot handle all members at once
*/

#include <stdio.h>
#include <string.h>

union test
{
    int a;
    float b;
    char c;
    char d[34];
}un;

int main() {
    union test olu;

    olu.a = 2;
    olu.b = 34.34;
    olu.c = 'f';
    strcpy(olu.d, "Kalpit");

    printf("%d\n", olu.a);
    printf("%f\n", olu.b);
    printf("%c\n", olu.c);
    printf("%s\n", olu.d);
    
    //see other things are currupt than olu.d it has 34 bytes available to use for 4 variables
    return 0;
}