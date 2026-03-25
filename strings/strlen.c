#include <stdio.h>
#include <string.h>

int main() {
    char *name = "Kalpit";
    // char myArr[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9}; //see this works in strlen

    int str_len_name = strlen(name); //count excluding the NULL character

    printf("The length of string is %d.", str_len_name);
    return 0;
}