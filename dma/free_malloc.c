#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr, *ptr2;

    ptr = (int *)malloc(6*sizeof(int)); 

    for (int i = 0; i < 600 ; i++)
    {
        ptr2 = (int *)malloc(600000*sizeof(int));
        printf("Enter value %d in malloc: ", i+1);
        scanf("%d", &ptr[i]);
        free(ptr); // see by commenting in task manager and see the memory increase and remove comment seeing it not increase consumption
    }
    
    for (int i = 0; i < 4; i++)
    {
        printf("%d\n", ptr[i]);
    }

    return 0;
}