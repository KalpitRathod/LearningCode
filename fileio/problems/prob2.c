/*
Write a program to generate multiplication table of a given number in text format.
Make sure that the file is readable and well formatted.
*/

#include <stdio.h>

int main() {
    FILE *ptr;
    int num;
    printf("table of :");
    scanf("%d", &num);
    ptr = fopen("table.txt", "w");
    for (int i = 0; i < 10; i++)
    {
        fprintf(ptr , "%d x %d = %d\n", num, i+1, num*(i+1));
    }
    fclose(ptr);
    printf("Successfully generated table of %d.", num);
    
    return 0;
}