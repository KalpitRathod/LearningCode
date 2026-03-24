#include <stdio.h>

int main() {

    int a = 5; //int-type declaration instruction
    int b = 4;

    // printf("Integer is %d\n", a+b); 
    // printf("%d\n", 1+1);
    // printf("%f\n", 1+1.1);

    //a,b is operands and + is arithmatic operator/instruction.
    //= is an assignment operator/instruction.
    //\n-escape sequence character (\t,\a etc.)
    //%-moduler division operator. (gives remainder b%a, b divided by a.)

    /*
    arithmatic expression * and / will follow left to right associativity.
    
    Priority Operator
    1st      !
    2nd      * / %
    3rd      + -
    4th      < > <= >=
    5th      == !=
    6th      &&
    7th      ||
    8th      =
    */
    printf("%f", 3.0 + 4.0 / 5.0 * 5.0 / 6.0 - 2.0);
    /*
    control instructions
    1. sequence control instruction
    2. decision control instruction
    3. loop control instruction
    4. case control instruction
    */

    return 0;
}