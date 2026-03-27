/*
A pointer is a variable which stores address of another variable
& symbol is used to get the address of the variable
* symbol is used to get the value of the variable that the pointer is pointing to.
In C, we can create generic pointers too
Regular C variable stores the value whereas pointer stores the address of the variable

int a = 3;
int *ptr = &a;

An statically allocated variable or array has a fixed size in memory
Dynamic Memory Allocation is a way in which the size of a data structure can be changed during the runtime.
Memory assigned to a program in a typical architecture can be brocken down into four segments
1. code
2. stack
3. Global & static variables ->data segment (initialized storagr)
4. code

Function pointer
we can have pointers pointing to functions as well
Function pointers are useful to implement callback functions
Compiler takes one or more source files and converts them to machine code
*/

#include <stdio.h>
#include <stdlib.h>

int sum(int a, int b);
void greet();

int main() {
    printf("sum: %d\n", sum(4,6));
    int (*fPtr) (int, int); //creating pointer that will point at function instructions
    fPtr = &sum;
    int summed = (*fPtr)(4,6); //derefreshing function from ptr
    printf("sum again from ptr: %d\n", summed);

    return 0;
}

void greet(){
    printf("Greetings!");
}

int sum(int a, int b){
    return a+b;
}