/*
Check if file exists or not
*/

#include <stdio.h>

int main() {
    FILE *ptr;
    int num1;
    int num2;

    ptr = fopen("variable.txt", "r");
    if (ptr == NULL)
    {
        printf("File does not exists.");
    }
    else
    {
        ptr = fopen("variable.txt", "r");
        fscanf(ptr, "%d", &num1);
        fscanf(ptr, "%d", &num2);

        printf("%d\n", num1);
        printf("%d\n", num2);
    }

    fclose(ptr); //it will release the resources
    return 0;
}
