/*
Write a prgram to read a text file character by character and write its content twice in a separate file.
*/ 

#include <stdio.h>

int main() {
    FILE *ptr1;
    FILE *ptr2;

    ptr1 = fopen("fromcopy.txt", "r");
    ptr2 = fopen("tocopy.txt", "w");

    char textof = fgetc(ptr1);
    while (textof!=EOF)
    {
        fputc(textof, ptr2);
        fputc(textof, ptr2);
        textof = fgetc(ptr1);
    }

    fclose(ptr1);
    fclose(ptr2);
    
    return 0;
}