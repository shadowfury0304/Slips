// program to accept string and find its length using user defined function (don't use library function)

#include <stdio.h>
#include <string.h>

// User-defined function to find string length
int stringLength(char str[]) {
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    return length;
}

int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove newline added by fgets
    str[strcspn(str, "\n")] = '\0';

    int len = stringLength(str);

    printf("Length of the string: %d\n", len);

    return 0;
}
