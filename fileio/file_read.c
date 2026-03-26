#include <stdio.h>

int main() {
    FILE *ptr;
    int num1;
    int num2;

    ptr = fopen("variable.txt", "r");
    fscanf(ptr, "%d", &num1);
    fscanf(ptr, "%d", &num2);

    // printf("%s\n", *ptr); //it can print string
    printf("%d\n", num1);
    printf("%d\n", num2); //separed by space the variable is taking in another fscanf ? awesome but how

    fclose(ptr); //it will release the resources
    return 0;
}