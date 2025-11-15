// C program to accept character, an integer and display next n characters.

#include <stdio.h>
int main() {
char ch;
int n, i;
// Input a character and an integer
printf("Enter a character: ");
scanf("%c", &ch);
printf("Enter an integer (n): ");
scanf("%d", &n);
printf("Next %d characters after '%c' are:\n", n, ch);
// Display next n characters
for (i = 1; i <= n; i++) {
printf("%c ", ch + i);
}
printf("\n");
return 0;
}