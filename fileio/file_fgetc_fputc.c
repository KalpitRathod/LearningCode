#include <stdio.h>

int main() {
    FILE *ptr;
    // ptr = fopen("getcdemo.txt", "r");
    // char c = fgetc(ptr);
    // printf("The value of my charactor is %c\n", fgetc(ptr));
    // printf("The value of my charactor is %c\n", fgetc(ptr));
    // printf("The value of my charactor is %c\n", fgetc(ptr));
    // printf("The value of my charactor is %c\n", fgetc(ptr));
    // printf("The value of my charactor is %c\n", fgetc(ptr));
    // printf("The value of my charactor is %c\n", fgetc(ptr));

    ptr = fopen("putcdemo.txt", "w");
    putc('K', ptr);
    putc('a', ptr);

    fclose(ptr);
    return 0;
}