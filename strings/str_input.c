#include <stdio.h>

int main() {
    char str_name[50];
    printf("Enter your name: ");
    scanf("%s", str_name); //see here i have given the first address of array

    printf("Your name is %s", str_name); //it doesnt work with multi strings with spaces
    return 0;
}