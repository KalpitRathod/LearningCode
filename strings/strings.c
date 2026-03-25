/*
char take 1 byte and its stores in continuous blocks
strings is stored array of characters
once a string is defined using st[] = "Kalpit" it cannot be reinitialized to something else.
a string defined using pointer can be re initialized
    eg. *ptr="Harshit"
*/

#include <stdio.h>

int main() {
    // char str[] = {'K', 'a', 'l', 'p', 'i', 't', '\0'};
    char str[] = "Kalpit";

    //this is how you can change the string
    // char *name = "Kalpit";
    // name = "Harshit"; //this can be done

    char *ptr = str;

    while (*ptr != '\0')
    {
        printf("%c", *ptr);
        ptr++;
    }
    
    // printf("%s", name);
    

    return 0;
}