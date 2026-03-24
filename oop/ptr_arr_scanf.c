/*
lets go, array with pointers wih loop with scanf
*/

#include <stdio.h>

int main() {
    int hello[4];
    int *ptr;

    printf("\naddress at hello[0] is %u.\n\n", hello);


    for (int i = 0; i < 4; i++)
    {
        ptr = &hello[i];
        printf("Enter number at index %d: ", i);
        scanf("%d, ", ptr);
        printf("\n");
    }

    
    for (int i = 0; i < 4; i++)
    {
        ptr = &hello[i];
        printf("%d, ", *ptr);
    }
    
    printf("\n\n");
    printf("address at hello[0] is %u", hello);
    return 0;
}