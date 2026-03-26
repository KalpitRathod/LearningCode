/*
Write name and salary of two employees as input from the user and write them to a text file in the following format:
name1, 2200
name2, 4522
*/

#include <stdio.h>

int main() {
    FILE *ptr;

    char name[20];
    char *nameptr = name;

    float salary;
    int numofemp;

    printf("No of Employee: ");
    scanf("%d", &numofemp);

    ptr = fopen("employees.txt", "w");

    for (int i = 0; i < numofemp; i++) 
    {
        printf("Employee %d (name): ", i+1);
        scanf("%s", &name);
        printf("Employee %d (salary): ", i+1);
        scanf("%f", &salary);

        fprintf(ptr, "%s, %.2f\n", name, salary);
        
    }
    
    fclose(ptr);

    return 0;
}