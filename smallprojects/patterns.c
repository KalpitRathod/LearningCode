#include <stdio.h>

void pattern1(int x); // Removed the space

int main() {
    pattern1(5);
    return 0;
}

void pattern1(int x) {
    if (x <= 0) { 
        return; // Proper base case to stop recursion
    }
    
    pattern1(x - 1); // Recursive call
    
    for (int i = 0; i < x; i++) {  
        printf("*"); 
    }
    printf("\n");

}
