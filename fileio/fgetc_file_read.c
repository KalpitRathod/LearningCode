#include <stdio.h>

int main() {
    FILE *ptr;
    char c;
    ptr = fopen("getcdemo.txt", "r");
    c = fgetc(ptr);
    while (c!=EOF) //EOF means end of file but how it will know?! I ran this infinite loop but EOF is not there
    {
        printf("%c", c);
        c = fgetc(ptr);
    }
    
    return 0;
}