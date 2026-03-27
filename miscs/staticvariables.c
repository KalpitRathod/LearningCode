/*
Local variable
Scope is a region of the program where a defined variable can exist and beyond which it cannot be accessed.
Variable which are accessed inside a function or a block are called local variable.
They can only be accessed by the function they are declared in!
They are inaccessible to the functions outside the function they are declared in!

Global variable
These are the variable defined outside the main method.
Global variables are accessible throughout the etire program from any function.
If a local and global variable has the same name, the local variable will take preference.

Formal arguments
These variables are treated as local variables with in a function.
These variables take precedence over global variables.

static variable in c
static variables are variables which have a property of preserving their values even when they go out of scope.
They preserve their value from the previous scope and are not initialized again.
Static variable remains in memory throughout the span of the program.
Static variables are initialized to 0 if not initialized explicitly.
In C, static variables can only be initialized using constant literals.
Static memory allocations happens before all the runtime.

lore of static
int func1(void){static int a=5; a++; return a;}
int main {a=func1(void); printf("%d", a); //6 a=func1(void); printf("%d", a); //7}
*/
int global_wala_variable = 3;

#include <stdio.h>
int func1(void){
    static int a=5;
    printf("%d\n", global_wala_variable);
    a++; 
    return a;
}
int main() {
    int a=func1(); 
    printf("%d", a); 
    a=func1(); 
    printf("%d", a); 
    a=func1(); 
    printf("%d", a); 
    printf("\n", a); 
    printf("%d", global_wala_variable);

    return 0;
} 
//it will remeber its old value and skip the re-intialization as five if called second time