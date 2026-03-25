#include <stdio.h>

int main() {
    char str_name[50];
    printf("Enter your name: ");
    gets(str_name); 
    puts(str_name); 

    // printf("Your name is %s", str_name); 
    return 0;
}