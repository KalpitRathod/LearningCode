#include <stdio.h>
// there is islower(ch) method available to check in <ctype.h>

int main() {
    char ch;

    printf("Enter a character: ");
    scanf("%c", ch);

    //this method relies on standard ascii char from 97 to 122
    if (ch >= 'a' && ch <= 'z'){
        printf("'%c' is lowercase letter.\n", ch);
    } else {
        printf("'%c' is not a lowercase letter.\n", ch);
    }
    return 0;
}