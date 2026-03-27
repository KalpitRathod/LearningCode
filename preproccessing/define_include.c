/* 
The #include directive

The #include directive causes the prerpocessor to fetch the contents of some other files to be included in the present file.
This file may in turn #include some other file(s) which may in turn do the same.
Most commonly the #included files have a ".h" extension, indicating the they are header files.

In C programming there are two common formats for #includes:
-> #include < headerFile.h > //the angle brackets say to look in the standard system directories
-> #include " myFile.h " //The quatation marks say to look in the current directory
Disk drive full path is allowed, but discouraged since it is not portable:
#include <\fullpath\somefile.h>

The #define directive
The #define directive is used to "define" preprocessor "variables"
The define preprocessor directive can be used to globally replace a word with a number.
It acts as if an editor did a global search-and-replace edit of the file.

Using #define for debugging
#define directive can be used for debugging
We can have printing statement that we only want active when debugging.
We can "protect" them in a "ifdef" block as follows:

#define DEBUG
#ifdef DEBUG
    print statmets
#endif
#undef DEBUG

Macros using #define
We can also create macros using #define
Macros operate much like functions, but because they are expanded in place and are generally faster.
#define PI 3.14
#define SQUARE(x) x*x
*/

#include <stdio.h>
#include "info.c"

// this will where PI is in the code
#define PI 3.14

//macro
#define SQUARE(r) r*r

int main() {
    int a = 4;
    int b = 4;
    int c;
    c=dummyFunc(a,b);
    printf("%d\n", c);

    float d = PI;
    printf("%.2f\n", d);

    printf("area of square: %.2f\n", PI*SQUARE(c));

    return 0;
}