// C program to which accepts sentence... and alters it as follows: Every space is replaced by *, case of all alphabets is reversed; digits are replaced by ?

#include <stdio.h>
#include <string.h>

int main() {
    char str[200];
    int i;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    // Remove newline
    str[strcspn(str, "\n")] = '\0';

    for (i = 0; str[i] != '\0'; i++) {

        // Replace space with '*'
        if (str[i] == ' ') {
            str[i] = '*';
        }
        // Replace digits with '?'
        else if (str[i] >= '0' && str[i] <= '9') {
            str[i] = '?';
        }
        // Lowercase → Uppercase
        else if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32;
        }
        // Uppercase → Lowercase
        else if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i] + 32;
        }
    }

    printf("Modified sentence: %s\n", str);

    return 0;
}
