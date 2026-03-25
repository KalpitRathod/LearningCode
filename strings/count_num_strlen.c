#include <stdio.h>

int strlen(char *ptr);

int main() {
    char *hello = "Kalpit Rathod";
    int totalLen = strlen(hello);
    printf("Length: %d", totalLen);
    return 0;
}

int strlen(char *ptr){
    int count = 0;

    while (*ptr != '\0')
    {
        ptr++;
        count++;
    }
    return count;
}
