// C program to accept String number find and display reverse of it.

#include <stdio.h>
int main() {
char numStr[100];
int i, length = 0;
// Accept string (number as a string)
printf("Enter a number (as string): ");
fgets(numStr, sizeof(numStr), stdin); // for learning; prefer fgets(numStr, sizeof(numStr), stdin)
// Find length manually
while (numStr[length] != '\0') {
length++;
}
// Display reverse
printf("Reversed number: ");
for (i = length - 1; i >= 0; i--) {
printf("%c", numStr[i]);
}
printf("\n");
return 0;
}