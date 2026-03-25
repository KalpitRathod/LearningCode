/*
Write a stucture capable of storing date.
Write a function to compare those dates.
*/

#include <stdio.h>

typedef struct myDate
{
    int dd;
    int mm;
    int yyyy;
} mydate;

void displayDate(mydate d);
int compareDate(mydate d1, mydate d2);

int main() {
    mydate d1 = {27, 03, 2026};
    mydate d2 = {26, 03, 2026};

    displayDate(d1);
    displayDate(d2);

    int p1 = compareDate(d1, d2);

    printf("%d", p1);

    return 0;
}

void displayDate(mydate d){
    printf("Date: %d/%d/%d\n", d.dd, d.mm, d.yyyy);
}

int compareDate(mydate d1, mydate d2){
    if (d1.yyyy > d2.yyyy)
    {
        return 1;
    }

    if (d2.yyyy > d1.yyyy)
    {
        return -1;
    }

    if (d1.mm > d2.mm)
    {
        return 1;
    }

    if (d2.mm > d1.mm)
    {
        return -1;
    }

    if (d1.dd > d2.dd)
    {
        return 1;
    }

    if (d2.dd > d1.dd)
    {
        return -1;
    }
    return 0;
    
}