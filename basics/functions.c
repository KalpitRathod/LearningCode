/*
there are two type of functions
1. library functions (printf, srand, rand, time etc.)
2. user defined functions

why use functions
1. to avoid writing code again and again.
2. to keep track of what we are doing in a program.
3. to test and check logic independently.

if the passed variable is changed inside the function, the function call doesnt change the value in the calling function.
*/

#include <stdio.h>
#include <math.h>

void display(); //function prototype
int sum(int a, int b); //it will return sum of two numbers

int main() { //while calling main function falls asleep and gets temporary suspended.
    // display(); //function function call
    int num1, num2, sumofis;
    printf("num1 (this is the side of square): ");
    scanf("%d", &num1);

    printf("num2: ");
    scanf("%d", &num2);

    sumofis = sum(num1, num2);
    printf("sum: %d\n", sumofis);

    printf("The value of area is %f\n", pow(num1,2));
    return 0;
}

void display() { //function definition
    printf("Hello World!");
}

int sum(int a, int b){
    int result;
    result = a+b;
    return result; //function can only one value at a time
}
