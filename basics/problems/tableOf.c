/*
Write a program to create an array of 10 integers and store multiplication table of any number in it.
*/

#include <stdio.h>

int main() {
    int multiFive[10];
    int tableOf;

    printf("Write table of: ");
    scanf("%d", &tableOf);
    printf("\n");


    for (int i = 1; i < 11; i++)
    {
        multiFive[i-1] = tableOf*i;
    }

    for (int i = 0; i < 10; i++)
    {
        printf("%d x %d = %d\n", tableOf, i+1, multiFive[i]);
    }
    
    return 0;
}