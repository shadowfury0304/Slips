//C program to accept number between 1 and 500.

#include <stdio.h>
int main() {
int num;
// Input number
printf("Enter a number between 1 and 500: ");
scanf("%d", &num);
// Check range
if (num >= 1 && num <= 500)
printf("You entered %d, which is within the range 1 to 500.\n", num);
else
printf("Invalid input! %d is not between 1 and 500.\n", num);
return 0;
}