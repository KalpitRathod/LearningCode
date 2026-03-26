#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr;
    int n;

    printf("How many int you want to enter %d in calloc: ");
    scanf("%d", &n);


    ptr = (int *)calloc(n, sizeof(int)); 

    for (int i = 0; i < n; i++)
    {
        printf("Enter value %d in calloc: ", i+1);
        scanf("%d", &ptr[i]);
    }
    
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", ptr[i]);
    }

    return 0;
}