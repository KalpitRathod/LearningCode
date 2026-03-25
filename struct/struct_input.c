/*
A structure in C is a collection of variables of different types under a single name.
*/

#include <stdio.h>
#include <string.h>

struct country {
    int numberInt;
    float numberFloat;
    char countryCode[10];
}; //semi colon is important

int main() {
    struct country india, usa;

    printf("Enter number Int: ");
    scanf("%d", &india.numberInt);
    
    printf("Enter number Float: ");
    scanf("%f", &india.numberFloat);

    printf("Enter Country Code: ");
    scanf("%s", india.countryCode);

    printf("Enter number Int: ");
    scanf("%d", &usa.numberInt);
    
    printf("Enter number Float: ");
    scanf("%f", &usa.numberFloat);

    printf("Enter Country Code: ");
    scanf("%s", usa.countryCode);

    printf("%d\n", india.numberInt);
    printf("%.1f\n", india.numberFloat);
    printf("%s\n", india.countryCode);

    printf("%d\n", usa.numberInt);
    printf("%.1f\n", usa.numberFloat);
    printf("%s\n", usa.countryCode);

    return 0;
}