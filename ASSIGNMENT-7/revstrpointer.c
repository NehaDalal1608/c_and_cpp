#include <stdio.h>

void reverseString(char *str) {
    if (str == NULL) {
        return; 
    }

    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    char *start = str;
    char *end = str + length - 1;
    char temp;
    while (start < end) {
        temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}

int main() {
    char inputString[100];

    printf("Enter a string: ");
    scanf("%s", inputString);
    reverseString(inputString);
    printf("Reversed string: %s\n", inputString);

    return 0;
}
  
  
/*Enter a string: neha
Reversed string: ahen*\

