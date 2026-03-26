#include <stdio.h>

int main() {
    FILE *ptr;
    ptr = fopen("intergers.txt", "r");

    int a, b, c;
    fscanf(ptr, "%d %d %d", &a, &b, &c);

    printf("%d %d %d", a, b, c);
    return 0;
}