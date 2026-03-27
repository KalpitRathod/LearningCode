/*
#undef -> undefines a macro
#ifdef -> if macro is defined returns true
#ifndef -> if macro is defined returns false
#if -> 
#else -> 
#elif -> 
#Pragma -> To issue some special commands to the compiler
#endif

Predefined Macros in C
1. __DATE__ The current date as character literal in "MMM DD YYYY" format
2. __TIME__ This contains the current time as a character literal in "HH:MM:SS" format
3. __FILE__ The current filename as a string literal
4. __LINE__ The current line number as a decimal constant
5. __STDC__ Defined as 1 when the compiler compiles with the ANSI standard.
*/

#include <stdio.h>

int main() {
    printf("File name is %s\n", __FILE__);
    printf("File name is %s\n", __DATE__);
    printf("File name is %s\n", __TIME__);
    printf("File name is %d\n", __LINE__);
    // printf("File name is %d\n", __STDC__);
    return 0;
}