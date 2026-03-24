/*
array passed in function with ptr
*/

#include <stdio.h>

void printArr(int *ptr, int size);

int main() {
    int thisArr[] = {1,2,3,4};
    printArr(thisArr, 4); //this Arr with give address of thisArr[0]

    return 0;
}

void printArr(int *ptr, int size){
    ptr[0] = 5; //thisArr is now have became the ptr understand thisArr is the already pointer and thisArr[0] is equivalent to ptr[0]

    for (int i = 0; i < size; i++)
    {
        printf("%d, ", *(ptr+i)); //see this ptr has address and +i will increase the byte address for int in array everytime 0 byte, 4 byte, 8 byte, 12 byte
    }
    
}
