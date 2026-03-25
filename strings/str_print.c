#include <stdio.h>

int main() {
    char *myArr = "Kalpit Rathod"; //this will automatically all NULL (\0) also directly get the pointer point at first char of array
    printf("%s", myArr); //%s is format specifier for string
    return 0;
}