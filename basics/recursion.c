#include <stdio.h>

int factorial(int x);

//a function can call itself
int main() {
    int x = factorial(3);
    printf("%d",x);
    return 0;
}

int factorial(int x){
    if (x==1 || x==0)
    {
        return 1;
    }
    else
    {
        return x * factorial(x-1);
    }   
}

/*
1. recursion is sometimes the most direct way to code an algorithm
2. the condition which doesn't call the function any further in a recursive function is called as the case condition
3. sometimes due to a mistake made by the programmer a recursive function can keep running without returning resulting in a memory error
*/