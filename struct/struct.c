/*
a structure in C is a collection of variables of different types under a single name.
struct keep the data organized
struct make data management easy for the programmer
struct it stored as contiguous memory location
*/

#include <stdio.h>
#include <string.h>

struct country {
    int population;
    float incomePerPerson;
    char countryCode[10];
}; //semi colon is important


int main() {
    struct country india;
    india.population = 40245; //"." is member operator
    india.incomePerPerson = 10400.43;
    // india.countryCode = "in"; //this will not work we will need strcpy
    strcpy(india.countryCode, "in");

    struct country usa = {32432, 43244.532, "us"};

    printf("%d\n", india.population);
    printf("%.1f\n", india.incomePerPerson);
    printf("%s\n", india.countryCode);

    return 0;
}