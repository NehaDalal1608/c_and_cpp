#include <stdio.h>
int main() {
    char s[] = "dypcet";
    int i;

    for (i = 0; s[i] != '\0'; ++i);
    
    printf("Length of the string: %d", i);
    return 0;
}

/*Length of the string: 6*\
