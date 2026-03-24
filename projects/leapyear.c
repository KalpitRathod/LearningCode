#include <stdio.h>

int main() {
    int year;
    printf("Leap year test.\n");
    printf("Enter year: ");
    scanf("%d", &year);

    /*
    2000
    .
    .
    2016
    2020
    2024
    2028
    2032
    */

    if (year%4==0)
    {
        printf("Yay! It's leap year.");
    } else {
        printf("Oh! man.");
    }
    
    return 0;
}