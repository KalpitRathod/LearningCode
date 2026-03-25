/*
also array is contiguous memory
*/

#include <stdio.h>
#include <string.h>

struct employee  {
    int code;
    float salary;
    char name[10];
};

int main() {
    struct employee facebook[100];
    facebook[0].code = 100;
    facebook[0].salary = 1234.42;
    strcpy(facebook[0].name, "Kalpit");

    printf("%d", facebook[0].code);
    return 0;
}