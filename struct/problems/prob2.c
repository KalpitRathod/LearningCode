/*
Create an array of 5 complex numbers and display them with the help of a display function.
The values must be taken as an input from the user.
*/

#include <stdio.h>

typedef struct complexnum {
    float real;
    float complex;
} comp;

void displayCNum();

int main() {
    comp c5num[5];

    for (int i = 0; i < 5; i++)
    {
        printf("Number %d (real): ", i+1);
        scanf("%f", &c5num[i].real);
        printf("Number %d (complex): ", i+1);
        scanf("%f", &c5num[i].complex);
    }

    displayCNum(c5num);

    return 0;
}

void displayCNum(comp *arrPtr){
    for (int i = 0; i < 5; i++)
    {
        printf("%f + %f i\n",arrPtr[i].real, arrPtr[i].complex);
    }
}
