#include <stdio.h>

int main(){
    int a, b;

    printf("Enter the value of a: ");
    scanf("%d", &a); //%d-format specifier, &a-address of a

    printf("Enter the value of b: ");
    scanf("%d", &b);

    printf("Sum: %d", a+b);
    return 0;
}