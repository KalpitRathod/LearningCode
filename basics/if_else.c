#include <stdio.h>

int main() {
    int a, b;
    printf("Even/Odd Test.\n");
    printf("Enter Number: ");
    scanf("%d", &a);

    if (!(a%2==0)) //used not for educational purposes :))
    {
        printf("%d is odd.\n", a);
    } else {
        printf("%d is even.\n", a);
    }
    //there is else if which can be use to check chain checker
    /*
    relational operators
    == equals ('=' is used for assignment, any non-zero number will be true in c language.)
    >= greater than or equal to
    > greater than
    < less than
    <= less than equal to
    != not equal to

    logical operator
    && if both are true than returns true otherwise returns false
    || if any one is true than it will returns true other false
    ! it will return false from true and true from false
    */

    // Ternary operator, short if_else
    (a<5) ? printf("A is less than 5.") : printf("A is not less than 5.");
    return 0;
}