//C program which accepts a string... find and display reverse of it (not using function).

#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, length = 0;

    // Accept string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove newline if present
    str[strcspn(str, "\n")] = '\0';

    // Find length manually
    while (str[length] != '\0') {
        length++;
    }

    // Display reverse
    printf("Reversed string: ");
    for (i = length - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }

    printf("\n");
    return 0;
}
