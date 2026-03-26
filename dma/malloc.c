#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr;

    ptr = (int *)malloc(4*sizeof(int)); //it reqires total bytes but every arch has different sizes, sizeof gives int
    //malloc returns void pointer and we need to type cast it

    for (int i = 0; i < 4; i++)
    {
        printf("Enter value %d in malloc: ", i+1);
        scanf("%d", &ptr[i]);
    }
    
    for (int i = 0; i < 4; i++)
    {
        printf("%d\n", ptr[i]);
    }

    return 0;
}