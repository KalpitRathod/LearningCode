/*
Array with Loops
*/
#include <stdio.h>

int main() {
    int numbers[4];

    for (int i = 0; i < 4; i++)
    {
        printf("Enter number in array at index %d: ", i);
        scanf("%d", &numbers[i]);
        printf("\n");
    }

    for (int i = 0; i < 4; i++)
    {
        printf("numbers[%d]: %d, ", i, numbers[i]);
    }
    
    return 0;
}