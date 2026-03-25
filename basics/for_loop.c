#include <stdio.h>

int main() {
    int counter = 0;
    for (int i = 1; i <= 5; i++) { //you can use i = i+1 also
        char ch;
        printf("Enter char: ");
        /*
        " %c" (with a space before %c) tells scanf to skip whitespace characters like newlines, which otherwise get captured unintentionally.
        Your loop runs 5 times, asking for a character each time. That’s fine, but without the space in " %c", you’ll often read the newline from pressing Enter instead of the actual character.
        */
        scanf(" %c", &ch);
        if (ch=='K') {
            counter += 1;
        }
    }
    printf("%d\n", counter);
    return 0;

    /*
    for (int i=5; i; i--){ // it will until there is no non-zero number is checked when 0 is checked it will exit.
        printf("%d", i);
    }
    */

    //break and continue(it will skip current iteration and skip to next value of loop ) can be used with if
}