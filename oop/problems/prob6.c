/*
Create a 2-d array by taking input from the user.
Write a display function to print the content of this 2-d array on the screen.
*/

#include <stdio.h>

void displayArr(int *ptr, int column, int row);

int main(){
    int row = 2;
    int column = 2;

    int myArr[2][2]; //this should not work but its working using row and column in place of 2, 2

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            printf("myArr[%d][%d]: ", i, j);
            scanf("%d", &myArr[i][j]);

        }
        
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            printf("%d, ", myArr[i][j]);
        }
        printf("\n");
        
    }
    

    return 0;
}