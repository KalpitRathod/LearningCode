/*
Write the program containing a function which reverses the array passed to it.
*/

#include <stdio.h>

void revArr(int *ptr, int size);

int main() {
    int myArr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int size = 9;

    printf("before reversing array\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d, ", myArr[i]);
    }
    printf("\n");

    revArr(myArr, size);

    printf("after reversing array\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d, ", myArr[i]);
    }
    printf("\n");
    
    return 0;
}

void revArr(int *ptr, int size){
        int temp;

        for (int i = 0; i < (size/2); i++)
        {
            temp = ptr[i];
            ptr[i] = ptr[size-1-i];
            ptr[size-1-i] = temp;
        }
}
