/*
Callback Functions

Function pointers are used to pass a function to a function
This passed function can then be called again (hence the name callback function)
This provides programmer to write less code to do more stuff.
*/

#include <stdio.h>
#include <stdlib.h>

int sum(int a, int b);
void greetHelloExecute(int (*ptr)(int, int));
void greetGMExecute(int (*ptr)(int, int));

int main() {
    int (*fPtr) (int, int); //creating pointer that will point at function instructions
    fPtr = &sum;
    greetHelloExecute(fPtr);
    greetGMExecute(fPtr);

    return 0;
}

void greetHelloExecute(int (*ptr)(int, int)){
    printf("Hello World\n");
    printf("sum of a and b is %d\n", ptr(6,7));
}

void greetGMExecute(int (*ptr)(int, int)){
    printf("Good Morning\n");
    printf("sum of a and b is %d\n", ptr(5,7));
}

int sum(int a, int b){
    return a+b;
}