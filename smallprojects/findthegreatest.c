#include <stdio.h>

int main() {
    int num1, num2, num3, num4;

    printf("Find the greatest number among 4 numbers program!\n");

    printf("Enter num 1: ");
    scanf("%d", &num1);
    printf("\n");

    printf("Enter num 2: ");
    scanf("%d", &num2);
    printf("\n");

    printf("Enter num 3: ");
    scanf("%d", &num3);
    printf("\n");

    printf("Enter num 4: ");
    scanf("%d", &num4);
    printf("\n");

    int greatestnum=num1;

    if (num2>num1)
    {
        greatestnum = num2;
    } else {
        greatestnum = num1;
    }

    if (greatestnum>num3){
        greatestnum = greatestnum;
    } else {
        greatestnum = num3;
    }

    if (greatestnum>num4){
        greatestnum = greatestnum;
    } else {
        greatestnum = num4;
    }

    printf("%d is the greatest number.", greatestnum);

    return 0;
}