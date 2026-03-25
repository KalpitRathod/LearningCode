#include <stdio.h>

int sumofnums(int num);

int main() {
    int sumis = sumofnums(10);
    printf("%d",sumis);
    return 0;
}

int sumofnums(int num){
    if (num == 1)
    {
        return 1;
    }else{
        return num + sumofnums(num-1);
    }
    
}