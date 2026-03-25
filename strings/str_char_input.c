#include <stdio.h>

void char_string(int *arrIs);

int main() {
    int thisArr[50];
    char_string(thisArr);

    return 0;
}

void char_string(int *arrIs) {
    char ch;
    int i_count = 0;

    while(ch != '\n'){
        printf("Enter char by char string: ");
        fflush(stdin); //it will take enter as input that why flush is required
        scanf("%c", &ch);
        arrIs[i_count] = ch;
        i_count++;
        printf("\n");
    }
    arrIs[i_count-1] = '\0'; //to end the string and i was already increased that why -1

    printf("\n");
    for (int i = 0; i < i_count; i++)
    {
        printf("%c", arrIs[i]);
    }
    
}