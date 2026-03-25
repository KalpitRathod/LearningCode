#include <stdio.h>

int main() {
    int rating;
    printf("Enter your rating (1-5): ");
    scanf("%d", &rating);

    // The value of integer-expression is matched against c1, c2, c3 ... If it matches any of these cases, that case along with all subsequent "case" and "default" statements are executed.
    // there can be char also
    switch (rating)
    {
    case 1:
        printf("Your rating is 1.\n");
        break;
    case 2:
        printf("Your rating is 5.\n");
        break;
    case 3:
        printf("Your rating is 3.\n");
        break;
    case 4:
        printf("Your rating is 4.\n");
        break;
    case 5:
        printf("Your rating is 5.\n");
        break;
    
    default:
        printf("Invalid rating.\n");
        break;
        }
    return 0;
}