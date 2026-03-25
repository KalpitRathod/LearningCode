/*
adding in the multi array is little different i will get back to it.
*/

#include <stdio.h>

void tablesof(int *arrTable, int size, int tableofnum);

int main() {
    int mulTable[3][10];
    tablesof(mulTable[0], 10, 2);
    tablesof(mulTable[1], 10, 7);
    tablesof(mulTable[2], 10, 9);

    return 0;
}

void tablesof(int *arrTable, int size, int tableofnum){
    for (int i = 0; i < 10; i++)
    {
        arrTable[i] = tableofnum*(i+1);
    }
    for (int i = 0; i < 10; i++)
    {
        printf("%d\n",arrTable[i]);
    }
    
}
