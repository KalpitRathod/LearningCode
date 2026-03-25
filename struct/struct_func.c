#include <stdio.h>
#include <string.h>

/*
Structure will not update with by reference change
*/

struct country {
    int population;
    float incomePerPerson;
    char countryCode[10];
}; //semi colon is important

void show(struct country con){
    printf("%d\n", con.population);
    printf("%.1f\n", con.incomePerPerson);
    printf("%s\n", con.countryCode);
}

int main() {
    struct country india;
    struct country *ptr;

    ptr = &india;

    ptr->population = 124;
    ptr->incomePerPerson = 24.24;
    strcpy(ptr->countryCode,"in");

    show(*ptr);

    return 0;
}