// Program to accept character as input and check whether character is a digit.

#include <stdio.h>
int main() {
char ch;
// Input a character
printf("Enter a character: ");
scanf("%c", &ch);
// Check if it is a digit
if (ch >= '0' && ch <= '9')
printf("'%c' is a digit.\n", ch);
else
printf("'%c' is not a digit.\n", ch);
return 0;
}