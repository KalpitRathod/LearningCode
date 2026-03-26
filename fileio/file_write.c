/*
Write to file
*/

#include <stdio.h>

int main() {
    FILE *fptr;
    int num1 = 5;
    char name[15] = "Kalpit Rathod";

    fptr = fopen("created.txt", "w");

    fprintf(fptr, "The number is %d.\n", num1);
    fprintf(fptr, "Author: %s\n", name);

    fclose(fptr);
    return 0;
}
