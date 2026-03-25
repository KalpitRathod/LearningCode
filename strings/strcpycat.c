#include <stdio.h>
#include <string.h>

int main() {
    char *stris = "Leena";
    char *strthat = "Anil";
    char strwhat[50]; //you cannot make only *strwhat and not assign any array string

    // copy into something
    strcpy(strwhat, stris);
    printf("%s\n", strwhat);

    //concet strings
    strcat(strwhat, strthat);
    printf("%s\n", strwhat);

    //compare strings
    int striscmp = strcmp(strthat, stris); //here A's ascii value is less than L's that why A-L is giving negative value (A-L)
    printf("%d\n", striscmp);

    return 0;
}