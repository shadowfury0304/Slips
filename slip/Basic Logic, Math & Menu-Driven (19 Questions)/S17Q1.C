//C program to accept number and check number is palindrome.

#include <stdio.h>
int main() {
int num, reversed = 0, remainder, original;
// Input number
printf("Enter a number: ");
scanf("%d", &num);
original = num; // store original number
// Reverse the number
while (num != 0) {
remainder = num % 10;
reversed = reversed * 10 + remainder;
num = num / 10;
}
// Check palindrome
if (original == reversed)
printf("%d is a palindrome number.\n", original);
else
printf("%d is not a palindrome number.\n", original);
return 0;
}