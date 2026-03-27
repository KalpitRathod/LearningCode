/*
GOTO statement

Also called jump statement in c
used to transfer program control to a pedefined label
Its use is avoided since it causes confusion for the fellow programmers in understanding the code.
Goto statement is preferable when we need to break multiple loops using a single statement at the same time.
*/

#include <stdio.h>

int main() {
    //program 1
    // label:
    //     printf("we are inside label\n");
    //     goto end;
    
    // printf("Hello World\n");
    // goto label;

    // end:
    //     printf("we are at the end\n");

    //program 2
    int num;
    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", i);
        for (int j = 0; j < 5; j++)
        {
            printf("%d\n", j);
            printf("Enter 0 to end this: \n", j);
            scanf("%d", &num);
            if (num==0)
            {
                goto end;
            }   
        }
    }
    end:
        printf("Don't worry, its ended");

    return 0;
}