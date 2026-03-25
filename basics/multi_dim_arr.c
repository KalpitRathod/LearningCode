/*

2D array
In memory it will store as 

myArr[0][0]->4 byte,
myArr[0][1]->4 byte,
myArr[1][0]->4 byte,
myArr[1][1]->4 byte, etc

if you want to point a pointer it will work like that and 2d will similarly store as if you are storing 4x2 = 8 values in 1D array.
*/

#include <stdio.h>

int main() {
    //this is first 4 elements, each element of that 4 elements contains 2 more elements.
    int myArr[4][2] = {{10,10}, 
                       {20,20}, 
                       {30,30}, 
                       {40,40}};

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d, ", myArr[i][j]);
        }
        printf("\n");
        
    }
    
    return 0;
}