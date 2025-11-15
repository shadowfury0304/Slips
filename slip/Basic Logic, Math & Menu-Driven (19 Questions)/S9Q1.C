//menu driven program to accept two numbers... and perform operations 1. Equality check... 2. Less than check... 3. Quotient and reminder display

#include <stdio.h>
int main() {
int x, y, choice;
// Accept two numbers
printf("Enter two numbers (x and y): ");
scanf("%d %d", &x, &y);
// Menu
printf("\n--- Menu ---\n");
printf("1. Equality Check\n");
printf("2. Less Than Check\n");
printf("3. Quotient and Remainder Display\n");
printf("Enter your choice (1-3): ");
scanf("%d", &choice);
// Perform operation based on choice
switch (choice) {
case 1:
if (x == y)
printf("x is equal to y.\n");
else
printf("x is not equal to y.\n");
break;
case 2:
if (x < y)
printf("x is less than y.\n");
else
printf("x is not less than y.\n");
break;
case 3:
if (y == 0)
printf("Division not possible (y cannot be zero).\n");
else {
printf("Quotient = %d\n", x / y);
printf("Remainder = %d\n", x % y);
}
break;
default:
printf("Invalid choice! Please enter 1, 2, or 3.\n");
}
return 0;
}