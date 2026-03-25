#include <stdio.h>

void slice(char *ptr, int from, int to);

int main() {
    char vadapav[] = "pavbhaj is my favorite dish."; //*vadapav will save as not changable string as char by char

    slice(vadapav, 1, 4);
    return 0;
}

void slice(char *ptr, int from, int to){
    int j = 0;
    for (int i = from; i < to; i++)
    {
        ptr[j] = ptr[i];
        j++;
    }
    ptr[j] = '\0'; //neccessary
    
    printf("%s", ptr);
    
}