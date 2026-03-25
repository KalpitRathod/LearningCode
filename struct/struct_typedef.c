#include <stdio.h>
#include <string.h>

typedef struct employee  {
    int code;
    float salary;
    char name[20];
} emp; //look at this

void show(struct employee con){
    printf("%d\n", con.code);
    printf("%.1f\n", con.salary);
    printf("%s\n", con.name);
}

int main() {
    emp india; //simple defining
    emp *ptr;

    ptr = &india;

    ptr->code = 124;
    ptr->salary = 24.24;
    strcpy(ptr->name,"in");

    show(india);
    return 0;
}