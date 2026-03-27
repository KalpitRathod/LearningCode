// What is a C preprocessor?

/*
C preprocessor comes under action before the actual compilation process
C preprocessor is not a part of the c compiler
It is a text substitution tool
All preprocessor commands begin with a hash symbol

Examples
#define -> its macro
#include -> its header file
eg. <stdio.h>
eg. <stdlib.h>
#undef -> preprocessor macro to undefine ==
#ifdef -> if check and returns true if defined
#ifndef -> if check not defined returns true or not
#if -> if any compile time condition is true
#else
#elif
*/

int dummyFunc(int a, int b){
    return a+b;
}