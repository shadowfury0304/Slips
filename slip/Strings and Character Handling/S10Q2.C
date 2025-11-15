//C program to check whether given character is digit or a character in lower case or uppercase alphabet.

#include <stdio.h>
int main() {
char ch;
// Input a character
printf("Enter a character: ");
scanf("%c", &ch);
// Check character type
if (ch >= '0' && ch <= '9')
printf("'%c' is a digit.\n", ch);
else if (ch >= 'a' && ch <= 'z')
printf("'%c' is a lowercase letter.\n", ch);
else if (ch >= 'A' && ch <= 'Z')
printf("'%c' is an uppercase letter.\n", ch);
else
printf("'%c' is not a digit or an alphabet.\n", ch);
return 0;
}