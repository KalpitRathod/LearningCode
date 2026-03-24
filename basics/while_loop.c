#include <stdio.h>

int main() {
    int a=1;
    int num;
    scanf("%d", &num);
    while (a<=num)
    {
        printf("%d\n", a);
        a++;
    }
    //--a will decrease first and than print, and a-- it will print a and than it will decrease
    //do{}while(); it will check the condition later and do the thing before
    return 0;
}