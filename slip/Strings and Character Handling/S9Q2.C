// program to accept lowercase letter and check whether letter is vowel or consonant.

#include <stdio.h>
int main() {
char ch;
// Input a lowercase letter
printf("Enter a lowercase letter: ");
scanf("%c", &ch);
// Check if input is a lowercase letter
if (ch >= 'a' && ch <= 'z') {
// Check for vowel
if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
printf("'%c' is a vowel.\n", ch);
else
printf("'%c' is a consonant.\n", ch);
} else {
printf("Invalid input! Please enter a lowercase letter (a-z).\n");
}
return 0;
}