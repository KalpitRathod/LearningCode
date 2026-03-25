#include <stdio.h>

int fibonacci(int nth);

int main() {
    int nth;
    printf("which(nth) number in fibonacci series you want to know?\n");
    scanf("%d", &nth);

    int fibsum = fibonacci(nth);
    printf("%d", fibsum);
    return 0;
}

int fibonacci(int nth){
    // 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, ...
    if (nth==1)
    {
        return 0;
    }
    if (nth==2)
    {
        return 1;
    }
    else 
    {
        return fibonacci(nth-1) + fibonacci(nth-2);
    }
}
